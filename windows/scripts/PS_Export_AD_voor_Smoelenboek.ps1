# departmentupdate.ps1
# Version 0.1


# Revision
# --- 0.1 -----16-12-2011----------------------------------------------------------- 
# * Intitial setup
# * added template
# * added group search
# * added manager mail query



import-module activedirectory

$xml = new-object System.Xml.XmlDocument
$xml_root = $xml.CreateElement("ncbUsers")
$xml.appendChild($xml_root)



$result = get-aduser -filter {department -notlike "NOIMPORT"}  -searchscope 1  -Server nnm.local -searchbase  "OU=NNM Users,dc=nnm,dc=local" -properties officephone,otherTelephone,city,department,office,title,streetaddress,initials,whencreated,office,wwwhomepage,objectGUID,company,UserPrincipalName,DisplayName,memberof | ForEach-Object {
		#get Departement and Sector
		# $department = @()
		# $sector = @()
		# $_.memberof | ForEach-Object {
			# if ($_.StartsWith("CN=Afd - ")) { 
				# $department += $_.Split(",")[0].Substring(9)
				# $dep_mem = Get-ADGroup $_.Split(",")[0].Substring(3) -properties memberof
				# $dep_mem.memberof | ForEach-Object {
					# if ($_.StartsWith("CN=Sector -")) { $sector += $_.Split(",")[0].Substring(12) }
				# }
			# }
		# }
		# $department = $department -join " / "
		# if ([string]::IsNullOrEmpty($department)) { $department = 'unknown' }
		# if ([string]::IsNullOrEmpty($sector)) { $sector = 'unknown' }
		
		
		#get Sector
		
		#$_.memberof | ForEach-Object {
		#	if ($_.StartsWith("CN=Sector -")) {
		#		$sector += $_.Split(",")[0].Substring(12)
		#	}
		#}
		$sector = $sector -join " / "
		
		$xml_smoel = $xml_root.appendChild($xml.CreateElement("smoel"))
		
		$xml_surname = $xml_smoel.appendChild($xml.CreateElement("surname"))
		$xml_givenname = $xml_smoel.appendChild($xml.CreateElement("givenname"))
		$xml_functie = $xml_smoel.appendChild($xml.CreateElement("functie"))
		$xml_afdeling = $xml_smoel.appendChild($xml.CreateElement("afdeling"))
		$xml_sector = $xml_smoel.appendChild($xml.CreateElement("sector"))
		$xml_phone = $xml_smoel.appendChild($xml.CreateElement("phone"))
		$xml_mobile = $xml_smoel.appendChild($xml.CreateElement("mobile"))
		$xml_room = $xml_smoel.appendChild($xml.CreateElement("room"))
		$xml_photo = $xml_smoel.appendChild($xml.CreateElement("photo"))
		$xml_aangemaakt = $xml_smoel.appendChild($xml.CreateElement("aangemaakt"))
		$xml_adGUID = $xml_smoel.appendChild($xml.CreateElement("adGUID"))
		$xml_locatie = $xml_smoel.appendChild($xml.CreateElement("locatie"))
		$xml_email = $xml_smoel.appendChild($xml.CreateElement("email"))
		$xml_displayName = $xml_smoel.appendChild($xml.CreateElement("displayName"))

        if ($_.surname) { $surname = $xml_surname.appendChild($xml.CreateTextNode($_.surname)) }
        
        if ($_.givenname) {
			$givenname = $xml_givenname.appendChild($xml.CreateTextNode($_.givenname))
        }else{
            if ($_.initials) { $givenname = $xml_givenname.appendChild($xml.CreateTextNode($_.initials)) }
        }
        
        if ($_.title) {  $title = $xml_functie.appendChild($xml.CreateTextNode($_.title)) }
        # $afdeling = $xml_afdeling.appendChild($xml.CreateTextNode($department))
        # $sector = $xml_sector.appendChild($xml.CreateTextNode($sector))
		if ($_.department) { $afdeling = $xml_afdeling.appendChild($xml.CreateTextNode($_.department)) }
		if ($_.streetaddress)	{$sector = $xml_sector.appendChild($xml.CreateTextNode($_.streetaddress)) }
        if ($_.officephone) { $phone = $xml_phone.appendChild($xml.CreateTextNode($_.officephone)) }
		if ($_.othertelephone) { $mobile = $xml_mobile.appendChild($xml.CreateTextNode($_.othertelephone[0]))  }
        if ($_.office) { $room = $xml_room.appendChild($xml.CreateTextNode($_.office)) }
		
		$storage_path = "\\fs-smb-002.ad.naturalis.nl\groups\Smoelenboek\_org\"
        if ($_.city) { 
            if ($_.city.contains("/") ) {
				# Old path, built from an URL http://mysite/smoelen/User.Name.jpg
                $p = $_.city.split("/")
                $ph =  $storage_path + $p[4]
            }else{
				# New path, just the filename: User.Name.jpg
                $p = $_.city
                $ph = $storage_path + $p
            }
			 if (Test-Path -path $ph ) { 
				$photo = $xml_photo.appendChild($xml.CreateTextNode($p[4]))
			}else{
				$photo = $xml_photo.appendChild($xml.CreateTextNode("none.jpg")) 
			}
       }else{
            $photo = $xml_photo.appendChild($xml.CreateTextNode("none.jpg")) 
        }
        $aangemaakt = $_.whencreated.year.ToString() +  "-" + $_.whencreated.month.ToString() + "-" +$_.whencreated.day.ToString()
		$aan = $xml_aangemaakt.appendChild($xml.CreateTextNode($aangemaakt))
		$adGUID = $xml_adGUID.appendChild($xml.CreateTextNode($_.objectGUID.ToString())) 
		$locatie = $xml_locatie.appendChild($xml.CreateTextNode($_.company)) 
		$email = $xml_email.appendChild($xml.CreateTextNode($_.UserPrincipalName)) 
		$displayName = $xml_displayName.appendChild($xml.CreateTextNode( $_.DisplayName))
		
		$xml_root.appendChild($xml_smoel)

}

#remove people with no lastname
#$xml.ncbUsers.smoel | Where-Object { $_.surname -eq "nnb" } | ForEach-Object  { [void]$xml.ncbUsers.RemoveChild($_) }
#$xml.Save("c:\temp\bla.xml")
#$xml.Save("\\nnms28\c$\beheer\smoels2.xml")
$xml.Save("C:\Smoelenboek\smoels.xml")