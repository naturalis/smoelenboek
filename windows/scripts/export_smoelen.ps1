# departmentupdate.ps1
# Version 0.1


# Revision
# --- 0.1 -----16-12-2011----------------------------------------------------------- 
# * Intitial setup
# * added template
# * added group search
# * added manager mail query



import-module activedirectory

$template = "<ncbUsers>
<smoel>
<surname>nnb</surname>
<givenname>nnb</givenname>
<functie>nnb</functie>
<afdeling>nnb</afdeling>
<sector>nnb</sector>
<phone>nnb</phone>
<mobile>nnb</mobile>
<room>nnb</room>
<photo>nnb</photo>
<web>nnb</web>
<aangemaakt>nnb</aangemaakt>
<adGUID>nnb</adGUID>
<locatie>nnb</locatie>
<email>nnb</email>
<displayName>nnb</displayName>
</smoel>
</ncbUsers>
"


$template | Out-File c:\powershell\smoel\smoels.xml

[System.Xml.XmlDocument] $xml = new-object System.Xml.XmlDocument
$xml.load("\\nnms89\c$\powershell\smoel\smoels.xml")
#$smoel = "http://mysite/smoelen/"
$dummies = @("http://mysite/smoelen/dummy1.jpg","http://mysite/smoelen/dummy2.jpg","http://mysite/smoelen/dummy3.jpg","http://mysite/smoelen/dummy4.jpg","http://mysite/smoelen/dummy5.jpg")

$newuser = (@($xml.ncbUsers.smoel)[0]).Clone()
$result = get-aduser -filter {department -notlike "NOIMPORT"}  -searchscope 1 -searchbase "OU=NNM Users,dc=nnm,dc=local" -properties officephone,otherTelephone,city,department,office,title,streetaddress,initials,whencreated,office,wwwhomepage,objectGUID,company,UserPrincipalName,DisplayName | ForEach-Object {

        $rnd = get-random -min 0 -max 4
    
        $newuser = $newuser.clone()
        if ($_.surname) { $newuser.surname = $_.surname }
        
        if ($_.givenname) 
        {
            $newuser.givenname = $_.givenname
        }else{
            if ($_.initials) { $newuser.givenname = $_.initials }
        }
        
        if ($_.title) {  $newuser.functie = $_.title   }
        if ($_.department) { $newuser.afdeling = $_.department }
        if ($_.streetaddress) { $newuser.sector = $_.streetaddress }
        if ($_.officephone) { $newuser.phone = $_.officephone }
		if ($_.othertelephone) { $newuser.mobile = $_.othertelephone[0] }
        if ($_.office) { $newuser.room = $_.office }
        if ($_.city) 
        { 
            if ($_.city.contains("/") )
            {
                $p = $_.city.split("/")
                $ph = "\\nnms28\SmoelenboekNieuw\"  + $p[4]
                if (Test-Path -path $ph ) 
                { 
                    #$newuser.photo = $_.city 
					$newuser.photo = $p[4]
                }else{
                    #$newuser.photo = $dummies[$rnd].ToString()
					$newuser.photo = "none.jpg"
                }
            }else{
                #$newuser.photo = $dummies[$rnd].ToString()
				$newuser.photo = "none.jpg"
            }
            
        }else{
            $newuser.photo = $dummies[$rnd].ToString()
        }
        $newuser.aangemaakt = $_.whencreated.year.ToString() +  "-" + $_.whencreated.month.ToString() + "-" +$_.whencreated.day.ToString()
		$newuser.adGUID = $_.objectGUID.ToString()
		$newuser.locatie = $_.company
		$newuser.email = $_.UserPrincipalName
		$newuser.displayName = $_.DisplayName
        if ($_.wwwhomepage) { $newuser.web = $_.wwwhomepage }
        $xml.ncbUsers.AppendChild($newuser)

}

#remove people with no lastname
$xml.ncbUsers.smoel | Where-Object { $_.surname -eq "nnb" } | ForEach-Object  { [void]$xml.ncbUsers.RemoveChild($_) }

$xml.Save("\\nnms28\c$\beheer\smoels.xml")