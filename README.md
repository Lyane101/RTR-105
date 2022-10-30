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
   - ```hexdump -C filename``` - parādīt datus heksadecimālā formātā
   - ```gcc filename.c -o filename.out``` - kompilēt C programmu ar norādīto objekta faila nosaukumu
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
   - <kbd>Alt</kbd>+<kbd>U</kbd> - atsaukt pēdējo izpildīto darbību
   - <kbd>Alt</kbd>+<kbd>E</kbd> - atsaukt iepriekš atsaukto darbību
   - ```--help``` - parādīt pieejamo komandas atslēgu sarakstu

## C programmēšanas valoda

1. Funkcijas:

   - ```printf("Characters: %c %c \n", 'a', 65);``` - datu attēlošanas piemērs
   - ```scanf("%d", &n);``` - datu ievadīšanas piemērs

2. Formāta specifikatori:

   - ```d or i``` - Signed decimal integer
   - ```o``` - Unsigned octal
   - ```x``` - Unsigned hexadecimal integer
   - ```f``` - Decimal floating point, lowercase
   - ```e``` - Scientific notation (mantissa/exponent), lowercase
   - ```c``` - Character
   - ```s``` - String of characters

   Datu tipa garuma modifikatori:

   - ```hh``` - signed char
   - ```h``` - short int
   - ```l``` - long int
   - ```ll``` - long long int

3. Piemēri:

```
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}
```
```
Output:

Characters: a A
Decimals: 1977 650000
Preceding with blanks:       1977
Preceding with zeros: 0000001977
Some different radices: 100 64 144 0x64 0144
floats: 3.14 +3e+000 3.141600E+000
Width trick:    10
A string
```
