REM Hier wordt gebruik gemaakt van rsync om diverse bestanden vanaf windows omgevingen naar Unix/linux te kopieren
REM
REM kopieer de bestanden vanaf de fs-smb-002.ad.naturalis.nl
C:\cygwin64\bin\rsync.exe -av --chmod=744 -e  "C:\cygwin64\bin\ssh.exe -E C:\Beheer\rsync\Log\ssh-images.log -i C:\beheer\rsync\id_rsa -o StrictHostKeyChecking=no " /cygdrive/d/Data/Smoelenboek/ smoelenboek.sync@145.136.242.214:/data/images

REM kopieer C:\Smoelenboek\smoels.xml vanaf hier ( MWB-AS-002.ad.naturalis.nl)
C:
cd \Smoelenboek
C:\cygwin64\bin\rsync.exe -v --chmod=644 -e  "C:\cygwin64\bin\ssh.exe -E C:\beheer\rsync\ssh-smoels.log -i C:\beheer\rsync\id_rsa -o StrictHostKeyChecking=no " smoels.xml smoelenboek.sync@145.136.242.214:/data/xml