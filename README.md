# RTR-105
Datormācība (pamatkurss) elektroniskā klade

## Shell komandas un paņēmieni
1. Komandas
   - ```pwd``` - noskaidrot pašreizējo darba direktoriju
   - ```cd``` - pārvietošanās failu sistēmā
	 - ```cd ..``` - pārvietoties vienu direktoriju augšup
	 - ```cd```, ```cd ~``` - pārvietoties uz mājas direktoriju
   - ```ls``` - parādīt direktorija saturu
     - ```ls -a``` - parādīt visu failu un direktoriju sarakstu (arī slēptos)
	 - ```ls -la``` - parādīt failu un direktoriju detalizētu sarakstu (arī slēptos)
	 - ```ls -lt``` - parādīt sakārtotu sarakstu pēc pēdējās modifikācijas laika
	 - ```ls -R``` - parādīt arī apakšdirektoriju failus
   - ```uname``` - noskaidrot informāciju par OS sistēmu
     - ```uname -a``` - noskaidrot detalizētu informāciju par OS sistēmu
   - ```history``` - pārskatīt iepriekš lietotās komandas
   - ```man``` - parādīt komandas instrukciju
   - ```whoami``` - parādīt pašreizējā lietotāja vārdu
   - ```who``` - parādīt lietotājus, kuri ir pieslēgušies sistēmai
   - ```tree``` - parādīt direktorija koku
   - ```ps -aux``` - parādīt visus palaistos procesus lietotājam
   - ```ps -aux | grep firefox``` - filtrēt no saraksta tikai Firefox procesu
   - ```kill 2490``` - apturēt konkrēto procesu
   - ```history > filename``` - ierakstīt komandu vēsturi norādītajā failā
   - ```cat filename``` - lasīt norādītā faila saturu
   - ```cat -b filename``` - paradīt teksta failā rindu numerāciju
   - ```wc filename``` - parādīt rindu, vārdu, simbolu skaitu failā
   - ```whereis name``` - noskaidrot komandas izpildāmā faila atrašanās vietu
   - ```nano filename``` - izveidot failu ar teksta redaktoru nano
   - ```chmod``` - mainīt faila vai direktorija tiesības
   - ```chown user filename``` - mainīt faila īpašnieku
   - ```chgrp group filename``` - mainīt faila grupu
   - ```cp filename1 filename2``` - kopēt failu
   - ```mv dirname1 dirname2``` - pārsaukt failu vai direktoriju
   - ```mkdir dirname``` - izveidot direktoriju
   - ```mkdir -p /tmp/user/test``` - izveidot arī vecāku direktorijus
   - ```rmdir dirname``` - dzēst direktoriju
   - ```rm filename``` - dzēst failu
   - ```rm -rf name``` - dzēst failus un direktorijus rekursīvi, bez apstiprināšanas
2. Paņēmieni
   - <kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>T</kbd> - atvērt termināli
   - <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>T</kbd> - atvērt jaunu cilni terminālī
   - <kbd>Shift</kbd>+<kbd>Insert</kbd> - ielīmēt terminalī
   - &#8645; - piekļūt iepriekš lietotām komandām
   - &#11134; - automātiskā aizpilde
   - <kbd>Ctrl</kbd>+<kbd>L</kbd>, ```clear``` - notīrīt terminālī iepriekš izmantotās komandas
   - <kbd>Ctrl</kbd>+<kbd>C</kbd> - pārtraukt jebkuras komandas darbību
   - <kbd>Ctrl</kbd>+<kbd>Z</kbd> - pauzēt jebkuras komandas darbību
   - <kbd>Ctrl</kbd>+<kbd>A</kbd> - pārvietot kursoru uz līnijas sākumu
   - <kbd>Ctrl</kbd>+<kbd>E</kbd> - pārvietot kursoru uz līnijas beigām
   - ```--help``` - parādīt pieejamo komandas atslēgu sarakstu
