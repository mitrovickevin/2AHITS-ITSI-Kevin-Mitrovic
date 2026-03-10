# Arbeitsbericht vom 17.09.2025

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: Umgang mit Replit und Einführung in Markdown

# Überschrift 1 g
## Überschrift 2
### Überschrift 3
#### Überschrift 4

**Fett**
*Kursiv*
`Code`
z.B. für Dateinamen `250917.md`

Bei Übungen immer den Text der Übung ins Dokument mit aufnehmen 

---

**Übung:** mit  welchen Befehl kann dr Inhalt eines Verzeichnisses angezeigt werden?

**Recherche**

Information über ls in folgenden Web-Seiten:

- [Link auf HTL](https://htl-braunau.at/)

**Lösung:**

```sh
$ ls
```

**Ausgabe**


```
250917.md
```

> Erkläre den Linux Befehl `ls` (ChatGPT)

- eins
- zwei
  - zwei eins 
  - zwei zwei
- drei # Arbeitsbericht vom 17.09.2025

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: File Befehle n Linux

# Grundlagen

Shell: ist en Programm, dass eine textorientierte Schnittstelle zum Betriebsystem zur Verfügung stellt.

```sh
~/workspace$
```

Einfacher Befehl

```
$ date
```

Jeder Befehl hat Optionen über die das Verhalten gesteuert werden kann.

```sh
$date -I
```
## Optionen

Optionen: 
- short-hand = Buchstabe
- long-hand = Wort

```sh
$date --iso-8601
```

Quellen zu Informationen über einen Befehl:

- häufig: Option `--help`
- man pages(Manual = Handbuch) `$ man date`,
nicht in Replit aber in gängigen Linux Distribution
- Internetsuche mit "man date"
- KI

## Argumente

Date mit den ein Befehl arbeitet

```sh
$ echo Hallo Welt
```

`Hallo Welt` ist hier ein Argument

mit Optionen

```sh
echo -n Hallo Welt
```

## Tastenkürzel

- Pfeil nach oben/unten: Historie
- Tabulator: automatische File Vervollständigen.
- Strg-A: Anfang der Zeile (Strg-E ... Ende)
- Strg-C: Abbruch des aktuellen Kommandos

## File Befehle 

cd, mkdir, ls, touch, pwd, rm
working directory (Arbeitsvezeichnis)

Unterschied absoluter und relativer Pfad

Bedeutung von cd (Ohne Argument) und von ~

### cd

- steht für **change directory**
  - Er ist schließlich da, um ein Verzeichnis zu wechseln
    
```sh
$cd (ordnername)/
```
- mit `cd ..` wechselst du ein **Verzeichnis** zurück
- nur mit `cd` kommst du zum **Home-Verzeichis**
- mit `cd /etc` verwendest du den **Absoluten Pfad**
- mit `cd etc/` verwendest du den **Relativen Pfad**

#### Absoluter Pfad

- Beginnt immer mit `/` und zeigt den genauen Ort an

#### Relativer Pfad

- Beginnt niemals mit `/`, sondern direkt mit einem Ordnernamen oder . bzw. ..# Arbeitsbericht vom 15.10.2025

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: Übungen der Fach-Homepage

## Übung (date)

Recherchiere in der manpage von date wie folgende ISO 8601 Datumsausgabe erzeugt werden kann.

```
2023-11-07T08:43:53+00:00
```

Hinweis: Die `-I` Option zeigt Default nur das Datum an.

**Lösung**

```
$ date "+%Y-%m-%dT%H:%M:%S%:z"
```

**Output:**
`
2025-10-15T06:25:46+00:00
`


## Übung (Directories und Files)

Lege mit `mkdir` und `touch` folgende Verzeichnisstruktur an:

```
./
└── abcd/
    ├── first_dir/
    │   ├── abcd.01.1.txt
    │   ├── abcd.01.2.txt
    │   └── abcd.01.3.txt
    └── second_dir/
        ├── xyz.02.1.txt
        ├── xyz.02.2.txt
        └── xyz.02.3.txt
```

Weiters:

- Stelle das Arbeitsverzeichnis auf `abcd/second_dir` und erstelle (ohne `cd` ein weiteres Mal zu verwenden):
  - ein Unterverzeichnis `in_first_dir`  in `first_dir`, und
  - darin wiederum eine Datei `neu.txt`
    Endgültig sieht es dann so aus: 

  ```
  ./
  └── abcd/
      ├── first_dir/
      │   ├── in_first_dir/
      │   │   └── neu.txt
      │   ├── abcd.01.1.txt
      │   ├── abcd.01.2.txt
      │   └── abcd.01.3.txt
      └── second_dir/
          ├── xyz.02.1.txt
          ├── xyz.02.2.txt
          └── xyz.02.3.txt
  ```

  **Lösung:**

```
.
├── abcd
│   ├── first_dir
│   │   ├── abcd.01.1.txt
│   │   ├── abcd.01.2.txt
│   │   └── abcd.01.3.txt
│   └── second_dir
│       ├── xyz.02.1.txt
│       ├── xyz.02.2.txt
│       └── xyz.02.3.txt

.
├── first_dir
│   ├── abcd.01.1.txt
│   ├── abcd.01.2.txt
│   ├── abcd.01.3.txt
│   └── in_first_dir
│       └── neu.txt
└── second_dir
    ├── xyz.02.1.txt
    ├── xyz.02.2.txt
    └── xyz.02.3.txt
```

## Übung (Befehle – Bewegen und Kopieren)

Informiere dich über die Befehle `rm`, `rmdir`, `cp` und `mv`. Probiere die Befehle aus und dokumentiere deine Erkenntnisse im Arbeitsbericht.

### rm

**Beschreibung:**

---

Löscht Dateien oder Verzeichnisse. "remove"

- `$rm datei.txt` — löscht die Datei datei.txt.

- `$rm -r verzeichnis/` — löscht das Verzeichnis rekursiv inklusive aller Dateien und Unterordner.

- `$rm -f datei.txt` — löscht ohne Rückfrage, auch schreibgeschützte Dateien.

- `$rm -rf verzeichnis/` — rekursives Löschen ohne Rückfrage (sehr gefährlich).

---

### rmdir

**Beschreibung:**

---

Löscht nur leere Verzeichnisse.

- `rmdir` löscht keine Verzeichnisse mit Dateien.
- Nützlich, um Ordner aufzuräumen, die keine Dateien mehr enthalten.
- Wenn der Ordner nicht leer ist, gibt es eine Fehlermeldung.

---

### cp


**Beschreibung:**

---

Der Befehl cp wird verwendet, um Dateien und Verzeichnisse zu kopieren.

- `$cp ab.txt xy.txt`
  kopiert die Datei `ab.txt` nach `xy.txt.`

`cp` erstellt eine exakte Kopie der Datei oder des Verzeichnisses am neuen Ort.

---

### mv

**Beschreibung:**

---

mv wird verwendet, um Dateien oder Verzeichnisse zu verschieben oder umzubenennen.

- `$mv ab.txt xy.txt`
Benennt die Datei `ab.txt` in `xy.txt` um.

- `$mv datei.txt ordner/`
Verschiebt die Datei `datei.txt` in den Ordner `ordner/`.

- `mv -i ab.txt xy.txt`
Fragt vor dem Überschreiben einer vorhandenen Datei.

- `mv -v ab.txt xy.txt`
Zeigt an, was verschoben oder umbenannt wird.

---

## Übung (Bewegen und Kopieren)

Ausgehend von der, in der vor-vorigen Übungen angelegten, Directory und Filestruktur:

- Nenne `neu.txt` in `umbenannt.txt`  um.
- Bewege das Verzeichnis `first_dir` in das Verzeichnis `second_dir`
- Bewege `umbenannt.txt` zwei Verzeichnisebenen höher (d.h. nach `second_dir`)
- Kopiere `first_dir` inklusive des Inhalts in ein neues Verzeichnis `kopie_von_first` im Verzeichnis `second_dir` (Hinweis: beim Kopieren von Directories mit `cp`  muss die Option `-r`).
- Lösche das Verzeichnis `first_dir`.

**Lösung**

```
$ mv neu.txt umbenannt.txt
```

```
$ mv first_dir/ second_dir/
```

```
$ mv umbenannt.txt ../../second_dir/
```

```
$ cp -r first_dir kopie_von_first
```

```
$ rm -r first_dir
```
---

## Challenge

Informiere dich über die Optionen der `ls`, `mv` und `rm` Kommandos. Probiere aus und dokumentiere deine Erkenntnisse im Arbeitsbericht.

---

### ls

**Beschreibung**

---

Mit dem Befehl ls kann man sich Dateien und Unterordner eines Verzeichnisses anzeigen lassen.

- `ls -l` zeigt die Dateien in langer Form, also mit Berechtigungen,               Eigentümer, Größe und Datum.

- `ls -a` listet auch versteckte Dateien auf (die mit einem Punkt beginnen).

- `ls -h` zeigt die Dateigrößen menschenlesbar (KB, MB) an.

- `ls -R` listet rekursiv alle Unterverzeichnisse und deren Inhalte auf.

- Optionen lassen sich kombinieren, z. B. `ls -lhaR` zeigt alles, inklusive -     versteckter Dateien, in lesbarer Größe und rekursiv.

---

### mv

**Beschreibung**

---
`mv` dient dazu, Dateien oder Verzeichnisse zu verschieben oder umzubenennen.

- Standardmäßig verschiebt `mv` einfach die Datei an den neuen Ort.

- Mit `mv alter_name neuer_name` kann man eine Datei oder einen Ordner umbenennen.

- Die Option `-i` sorgt dafür, dass man vor dem Überschreiben gefragt wird,       praktisch zur Sicherheit.

- Mit `-v` kann man sehen, was genau verschoben oder umbenannt wird.

---

### rm

**Beschreibung**

---

Mit `rm` kann man Dateien und Verzeichnisse löschen.

- `rm datei.txt` löscht eine einzelne Datei.

- Um ein ganzes Verzeichnis zu löschen, muss man `-r (rekursiv)` verwenden: `rm   -r ordner/`.

- Mit `-i` fragt `rm` vor jedem Löschen nach, das ist nützlich, um Fehler zu      vermeiden.

- `-f` erzwingt das Löschen ohne Nachfrage.

- `-v` zeigt an, was gerade gelöscht wird.











  
# Arbeitsbericht vom xxx

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: stdin/stdout

## cat

Mit ```$ cat``` kann man was ausgeben (Es wird wiederholt)

`
asdf
asdf
yxcv
yxcv
`

Mit ```$ cat > test.txt``` wird die Eingabe in einer File geschrieben

`
erste Zeile
zweite Zeile
sflfafsadflk
`

Mit ```$ cat < test.txt``` kann man herausfinden was in einer File so steht
<br>
(WICHTIG: Man kann es auch ohne '<' machen ```$ cat test.txt```)

`
erste Zeile
zweite Zeile
sflfafsadflk

## echo


`

Mit ```$echo ...``` kann man ebenso was ausgeben

`
...
`

Mit ```$ echo Hallo Welt >hallo.txt``` wird 'Hallo Welt' in der .txt Datei geschrieben

```Hallo Welt```

Mit ```$ echo 2AHITS >>hallo.txt``` ein Text hinten drangehängt
<br>
(WICHTIG: Ohne dem `>>` wird der Text sonst überschrieben)

`
Hallo Welt
2AHITS
`

Mit ```$ echo '>>> Achtung <<<'``` Die Backticks sind nicht umsonst da, die sind wichtig, weil die <<< als Befehl angesehen werden

sonst `bash: syntax error near unexpected token '>'`

Man kann auch mit `""``, das ist kein Problem

`$ echo ">>> Achtung <<<"`

---

## Übung (Kopie mit cat)

Erstelle mit Hilfe von “cat” eine Kopie der Datei test.txt in der neuen Datei test2.txt. test2.txt soll den gleichen Inhalt enthalten wie test.txt. Prüfe ob test2.txt wirklich den gewünschten Inhalt hat.

```
$ touch test2.txt
$ cat > test.txt
```

`
Hallo Welt 
Guten Morgen
`

```
$ cat > test2.txt
```

`
Hallo Welt            
Guten Morgen
`

---

## Übung (dirlist in File)

Schreibe den, mittels ls ermittelten, Inhalt des Verzeichnisses /etc in eine Textdatei mit dem Namen etcdir.txt. Inhalt des Verzeichnisses = die Namen der enthaltenen Files und Unterverzeichnisse.

```
$ ls
```

`
alternatives            environment  issue          machine-id     profile.d    shadow-
apt                     fonts        issue.net      mke2fs.conf    rc0.d        shells
bash.bashrc             fstab        kernel         mtab           rc1.d        skel
bash_completion.d       gai.conf     ld.so.cache    networks       rc2.d        ssl
bindresvport.blacklist  gitconfig    ld.so.conf     nix            rc3.d        subgid
ca-certificates         gnutls       ld.so.conf.d   nixmodules     rc4.d        subgid-
ca-certificates.conf    group        legal          nsswitch.conf  rc5.d        subuid
cloud                   group-       libaudit.conf  opt            rc6.d        subuid-
cron.d                  gshadow      locale.alias   os-release     rcS.d        sysctl.conf
cron.daily              gshadow-     locale.conf    pam.conf       replit       sysctl.d
debconf.conf            gss          locale.gen     pam.d          resolv.conf  systemd
debian_version          host.conf    localtime      passwd         rmt          terminfo
default                 hostname     login.defs     passwd-        security     update-motd.d
dpkg                    hosts        logrotate.d    perl           selinux      xattr.conf
e2scrub.conf            init.d       lsb-release    profile        shadow       zoneinfo
`

```
$ ls /etc > etcdir.txt
```

`
alternatives            environment  issue          machine-id     profile.d    shadow-
apt                     fonts        issue.net      mke2fs.conf    rc0.d        shells
bash.bashrc             fstab        kernel         mtab           rc1.d        skel
bash_completion.d       gai.conf     ld.so.cache    networks       rc2.d        ssl
bindresvport.blacklist  gitconfig    ld.so.conf     nix            rc3.d        subgid
ca-certificates         gnutls       ld.so.conf.d   nixmodules     rc4.d        subgid-
ca-certificates.conf    group        legal          nsswitch.conf  rc5.d        subuid
cloud                   group-       libaudit.conf  opt            rc6.d        subuid-
cron.d                  gshadow      locale.alias   os-release     rcS.d        sysctl.conf
cron.daily              gshadow-     locale.conf    pam.conf       replit       sysctl.d
debconf.conf            gss          locale.gen     pam.d          resolv.conf  systemd
debian_version          host.conf    localtime      passwd         rmt          terminfo
default                 hostname     login.defs     passwd-        security     update-motd.d
dpkg                    hosts        logrotate.d    perl           selinux      xattr.conf
e2scrub.conf            init.d       lsb-release    profile        shadow       zoneinfo
`

---

## Übung (os-release)

Es gibt eine Datei /etc/os-release.

- Betrachte deren Inhalt mit cat, welche Informationen kannst du daraus ableiten. Würde    diese Information einem Hacker helfen der sich Zugriff auf das System verschafft hat? Wenn ja, wie?
- Wie wird die Datei mit ls -l angezeigt? Was bedeutet diese Anzeige?

```
$ cd /etc
$ cat os-release
```

`
PRETTY_NAME="Ubuntu 24.04.2 LTS"
NAME="Ubuntu"
VERSION_ID="24.04"
VERSION="24.04.2 LTS (Noble Numbat)"
VERSION_CODENAME=noble
ID=ubuntu
ID_LIKE=debian
HOME_URL="https://www.ubuntu.com/"
SUPPORT_URL="https://help.ubuntu.com/"
BUG_REPORT_URL="https://bugs.launchpad.net/ubuntu/"
PRIVACY_POLICY_URL="https://www.ubuntu.com/legal/terms-and-policies/privacy-policy"
UBUNTU_CODENAME=noble
LOGO=ubuntu-logo
`

**Die Datei verrät Distribution und Version (z. B. Ubuntu 22.04) — nützlich für gezielte Exploit-Recherche, aber allein nicht ausreichend für eine Kompromittierung.**

```
$ ls -l /etc/os-release
```

`
lrwxrwxrwx 1 root root 21 Feb  5  2025 /etc/os-release -> ../usr/lib/os-release
`

**ls -l /etc/os-release zeigt Dateityp, Zugriffsrechte, Besitzer, Gruppe, Größe, Änderungsdatum und Namen (bzw. Ziel, falls Symlink) der Datei an.**

---

## Übung (Textdatei erstellen)

Mit Hilfe von mehreren echo Befehlen können einfache Textdateien erstellt werden.

Erzeuge nur unter Verwendung von echo Befehlen die Datei made_by_echoing.txt mit Inhalt:

```
=====================
=    HTL BRAUNAU    =
=====================
= 2AHITS Gruppe n   =
= x Schülerinnen    =
= y Schüler         =
=====================
```
Setze für `n`, `x` und `y` die richtigen Werte ein.

```
$ echo ===================== >made_by_echoing.txt
$ echo =    HTL BRAUNAU    = >>made_by_echoing.txt
$ echo ===================== >>made_by_echoing.txt
$ echo = 2AHITS Gruppe 2   = >>made_by_echoing.txt
$ echo = 26 Schülerinnen   = >>made_by_echoing.txt
$ echo = Kevin Mitrovic Schüler         = >>made_by_echoing.txt
$ echo ===================== >>made_by_echoing.txt
```

**Output:**


```
=====================
=    HTL BRAUNAU    =
=====================
= 2AHITS Gruppe 2   =
= 26 Schülerinnen    =
= Kevin Mitrovic Schüler         =
=====================
```

---

## Übung (C Hallo Welt)

Erstelle nur mit Hilfe von `echo` Befehlen eine Datei `hello.cpp` mit folgendem Inhalt: 

```c++
#include <iostream>

int main() {
  printf("\n\t*** Hallo Welt ***\n");
  return 0;
}
```

Hinweis: Verwende einfache Hochkommas rund um den mit `echo` auszugebenden Text (Beispiel: `echo 'text'`) ansonsten hat die shell Schwierigkeiten mit den Sonderzeichen `#`,`<`,`>` etc.

Compiliere das C Programm mit folgendem Befehl in der Kommandozeile:

```sh
g++ -o hello hello.cpp
```

Das Programm kann so gestartet werden:

```sh
./hello
```

Mit Strich-Punkt (`;`) getrennt lassen sich auch 2 Befehle hintereinander inn der Kommandozeile schreiben – probiere auch das einmal aus:

```sh
g++ -o hello hello.cpp;./hello
```

---

```
$ echo '#include <iostream>' >hello.cpp
$ echo 'int main()'  >>main.cpp
$ echo ' printf("\n\t*** Hallo Welt ***\n"); ' >>hello.cpp
$ echo 'return 0;' >>hello.cpp
$ echo '}' >>hello.cpp
```

**Output:**
``` cpp
#include <iostream>
int main() {
 printf("\n\t*** Hallo Welt ***\n"); 
 return 0;
}
```

```
$ g++ -o hello hello.cpp
$ ./hello
```

**Output:**

`
*** Hallo Welt ***
`

**Das mit der doppelten Ausgabe funktioniert nicht ganz richtig, laut Chat gpt soll der Befehl falsch sein. Er gab mir einen anderen Befehl (`g++ -o hello hello.cpp && ./hello
`). Der funktioniert aber auch nicht!**

---

## Übung (Here-Documents)

Informiere dich über die Here-Documents Schreibweise (=Syntax) und führe damit die Aufgabenstellungen "Textdatei erstellen" und "C Hallo Welt" noch einmal aus.

---

**Ein Here-Document ist eine Shell-Syntax, mit der du mehrzeiligen Text direkt in ein Kommando schreibst — ohne Editor.
Typisch verwendet mit cat oder als Eingabe für Compiler etc.**

**Aufgabe Textdatei erstellen:**

```
$ cat <<EOF > text.txt
=====================
=    HTL BRAUNAU    =                              
=====================
= 2AHITS Gruppe n   =
= x Schülerinnen    =
= y Schüler         =
=====================
EOF
```

```
$ cat text.txt
```

**output:**

```
=====================
=    HTL BRAUNAU    =
=====================
= 2AHITS Gruppe n   =
= x Schülerinnen    =
= y Schüler         =
=====================

```

---


**Aufgabe C Hello:**

```
$ cat <<EOF > hello.cpp
#include <iostream>
int main() {
 printf("\n\t*** Hallo Welt ***\n"); 
 return 0;
}
EOF
```

```
$ cat hello.cpp
```

**Output:**

```cpp
#include <iostream>
int main() {
 printf("\n\t*** Hallo Welt ***\n"); 
 return 0;
}

```

---

# Arbeitsbericht vom 19.11.25

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: Übungen stdin/stdout **Teil2**
- hzh


## Übung (C in/out)

Auch selbstgeschriebene C Programme lesen von stdin und schreiben auf stdout. Und daher kann man auch hier die Dateiumleitung mit `<`, `>`, oder `>>` verwenden. Das Programm merkt davon gar nichts.

- Erstelle eine Datei `sum.cpp` und öffne diese im Replit Editor.

- Schreibe ein C Programm das zuerst eine Anzahl (`int n`) einliest.

- Dann werden n weitere ganze Zahlen eingelesen und die Summe dieser Zahlen ermittelt.

- Am Ende gibt das Programm die Summe aus (dies soll die einzige Ausgabe des Programms sein).
  Beispiel-Programmablauf (n=3):

  ```
  3
  5
  4
  2
  11
  ```

  Bedeutung: Es sollen 3 Zahlen eingegeben werden, diese sind 5, 4 und 2. Deren Summe ist die Ausgabe 11.

- Compiliere das Programm mit folgender Kommandozeile:
  ```sh
  g++ -o sum sum.cpp
  ```

  Wenn keine Compile-Fehler auftreten wird im gleichen Verzeichnis das Programm mit dem Namen `sum` erzeugt. Prüfe mit `ls` ob vorhanden.

- Behebe evtl. Compiler-Fehler und starte dann das Programm mit:
  ```sh
  ./sum
  ```

- Erstelle eine Textdatei mit den Input Daten für das Programm `sum`. Z.B.
  ```
  5
  1
  2
  3
  4
  5
  ```

- Rufe nun das Programm auf und leite die Textdatei per **Dateiumleitung** ins stdin des Programms `sum` um. Schreibe weiters den Output des Programms in eine Textdatei.

---

**Programm:**

```cpp
#include <stdio.h>

int main() 
{
  int n;
  int summe = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
      int wert;
      scanf("%d", &wert);
      summe += wert;
  }

  printf("%d", summe);
  return 0;
}

```

**Output:**

```
$ g++ sum.cpp -o sum
$ ./sum

2
3
3
6
```

**In sum.txt Datei:**

```
$ ./sum >sum.txt

3
2
2
2

sum.txt: 6
```

---

## Challenge (C in/out)

Recherchiere wie das vorhergehende Programm so erweitert werden kann damit die Anzahl als erster Wert nicht mehr notwendig ist, d.h. das Ende der Daten automatisch erkannt wird.

Hinweis: Es gibt das Konzept des End of File (EOF). Ist stdin die Tastatur so ist EOF **Ctrl+D**.

---

**Lösung:**

```cpp
#include <stdio.h>

int main()
{
    int wert;
    int sum = 0; 

    printf("Gib Zahlen ein. Beenden mit Ctrl+D :\n");

    while (scanf("%d", &wert) != EOF)
    {
        sum += wert;
    }

    printf("\nProgramm beendet.\n");
    printf("Summe: %d\n", sum);

    return 0;
}
```


**Output:**
```
$ g++ -o sum sum.cpp

$ ./sum

Gib Zahlen ein (Bestätigen mit Enter). Beenden mit Ctrl+D :
2
2
2
2

Programm beendet.
Summe: 8
```

---

## Übung (semikolon in command-line)

Mit Strich-Punkt (`;`) getrennt lassen sich auch 2 Befehle hintereinander in der Kommandozeile schreiben – diese werden dann nacheinander ausgeführt.

Probiere aus – in einer einzigen Kommandozeile:

- Mit echo einen Text in eine Datei schreiben und deren Inhalt gleich wieder ausgeben
- Ein C-Programm compilieren und sofort danach starten

---

**1. Lösung:**

```
$ echo Hallo Welt >test.txt; cat test.txt
```

**1. Output:**

```
Hallo Welt
```

---

**2. Programm:**

```cpp
#include <stdio.h>

int main()
{

  printf("Hallo Welt\n");
  return 0;
}
```


**2. Lösung:**

```
$ g++ -o hello hello.cpp; ./hello
```

**2. Output:**

```
Hallo Welt
```

---

## Übung (Here-Documents)

Informiere dich über die Here-Documents Schreibweise (=Syntax) und führe damit die Aufgabenstellungen "Textdatei erstellen" und "C Hallo Welt" noch einmal aus.

---

### Textdatei erstellen



**Erklärung:**

- `cat`: Liest den **Input**.

- `<< EOF`: Sagt der Shell **"Hier beginnt der Input, lies bis du 'EOF' siehst"**.

- `> xxx.txt`: **Speichert** das Ergebnis in der **Datei**.

<br>

**Here-Documents (=Syntax)**

- Er ist hilfreich, weil man nicht ständig `echo` benutzen muss, um etwas in einer Datei zu schreiben. 
- Außerdem kann man auch nur mit dem `echo` in einzelne Zeilen was schreiben.
- Das Schlüsselwort ist in dem Fall das `EOF`
- Vorteil: **schnell**
- Nachteil: **etwas komplexer**

<br>

**Lösung:**
```
$ cat <<EOF >test.txt
> =====================
> =    HTL BRAUNAU    =
> =====================
> = 2AHITS Gruppe 2   =
> = 27 Schülerinnen   =
> = 14 Schüler        =
> =====================
> EOF
```

**Output (in der Datei):**

```
=====================
=    HTL BRAUNAU    =
=====================
= 2AHITS Gruppe 2   =
= 27 Schülerinnen   =
= 14 Schüler        =
=====================

```

<br>

### C Hallo Welt

**Lösung:**
```
$ cat <<EOF >hello.cpp
> #include <iostream>
> 
> int main() {
>    printf("\n\t*** Hallo Welt ***\n");
>    return 0;
> }
> EOF
```

**Output (in der Datei):**

```cpp
#include <iostream>

int main() {
   printf("\n\t*** Hallo Welt ***\n");
   return 0;
}
```
# 2AHITS ITSI Übungen

[Aufgabenstellungen](https://www.franzmatejka.at/htl/doc/ITSI_2_linux/07_tools_ue.html)


# Arbeitsbericht vom 17.12.2025

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: Tools




## Wiederholung


- ### wget

`wget` Lädt Dateien aus dem Internet herunter.

**Bsp.:** `$ wget https://www.franzmatejka.at/htl/doc/ITSI_2_linux/testdata/shopping.txt`   <br>
**Output:** Ladet den [Inhalt](https://www.franzmatejka.at/htl/doc/ITSI_2_linux/testdata/shopping.txt) in einer Datei *shopping.txt* herunter.

<br>

- ### head

`head` Zeigt den Anfang einer Textdatei.

**Bsp.:** `$ head <shopping.txt`  <br>
**Output:** gibt die ersten 10 Zeilen aus

<br>

## Übung 3.1 (head)

- Zeige die ersten 5 Zeilen von `/etc/passwd` und die ersten 7 Zeilen von `/etc/group`.
- Was passiert wenn bei `head` eine negative Zahl für die Anzahl der Zeilen verwendet wird? Was steht dazu in der manpage von `head`?
- Erstelle eine Datei `zahlen.txt` mit den Zahlen von 1 bis 100 (100 Zeilen). Verwende dazu das Tool `seq` und Dateiumleitung (`>`). Zeige dann die ersten 10 Zeilen dieser Datei. Zeige mit einem weiteren Kommando alles bis auf die letzten 80 Zeilen.
- Schreibe die ersten 7 Zeilen der Datei `zahlen.txt` in eine neue Datei `anfang.txt`.
- Zeige die ersten 8 Zeilen von mehreren Dateien gleichzeitig (`/etc/passwd`, `/etc/group`) in einer einzigen Kommandozeile.
- Nummeriere alle Zeilen von `/etc/passwd` mit Hilfe des Tools `nl` und schreibe das Ergebnis in eine Datei `passwd_numbered`. Zeige die ersten 12 Zeilen dieses Files an.
- Verwende `seq` so dass die Zahlen 1-30 mit `_` getrennt in die Datei `zahlen2.txt` geschrieben werden. D.h. in der Form `1_2_3_4_5_6_7_…`. Gib dann mit `head` so viele Zeichen davon wieder aus, dass der Text `1_2_3_4_5_6_7_8_9_10` ausgegeben wird.

**Lösungen:**

### 1.
`$ head -n 5 /etc/passwd`

**Output:**  

```
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
```

`$ head -n 7 /etc/group`

**Output:**  

```
root:x:0:
daemon:x:1:
bin:x:2:
sys:x:3:
adm:x:4:
tty:x:5:
disk:x:6:
```

<br>

### 2.

`$ head -n -3` bedeutet zeige alles an, außer die letzten 3 Zeilen.

**Output:**

```
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/run/ircd:/usr/sbin/nologin
```

<br>

### 3.

`$ seq 1 100 > zahlen.txt`

`$ head zahlen.txt`

**Output:**

```
1
2
3
4
5
6
7
8
9
10
```

`$ head -n -80 zahlen.txt`

**Output:**

```
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
```

<br>

### 4.

`$ head -n 7 zahlen.txt > anfang.txt`

**Output in anfang.txt:**

```
1
2
3
4
5
6
7
```

<br>

### 5.

`$ head -n 8 /etc/passwd /etc/group`

**Output:**

```
==> /etc/passwd <==
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin

==> /etc/group <==
root:x:0:
daemon:x:1:
bin:x:2:
sys:x:3:
adm:x:4:
tty:x:5:
disk:x:6:
lp:x:7:
```

<br>

### 6.

`$ nl /etc/passwd > passwd_numbered`

**Output:**

```
kspace$ head passwd_numbered
 1  root:x:0:0:root:/root:/bin/bash
 2  daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
 3  bin:x:2:2:bin:/bin:/usr/sbin/nologin
 4  sys:x:3:3:sys:/dev:/usr/sbin/nologin
 5  sync:x:4:65534:sync:/bin:/bin/sync
 6  games:x:5:60:games:/usr/games:/usr/sbin/nologin
 7  man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
 8  lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
 9  mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
10  news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
```

<br>

### 7.

`$ seq -s "_" 1 30 > zahlen2.txt`

`$ head -c 20 zahlen2.txt`

**Output:**

```
1_2_3_4_5_6_7_8_9_10_11_12_13_14_15_16_17_18_19_20_21_22_23_24_25_26_27_28_29_30
```

---

## Übung 3.2 (more / less)

Recherchiere über die Tools `more` und `less`. Für Versuche kann die folgende Datei verwendet werden:

```
/usr/share/common-licenses/LGPL-2.1
```

Probiere:

- Zeilen-/Seitenweise bewegen
- Beenden
- Nach Text suchen und von einer gefundenen Stelle zur nächsten springen

Was ist der Unterschied zwischen `less` und `more`?


### more
* **Was es macht:** Es zeigt den Text Stück für Stück an.
* **Wozu es dient:** Um eine Datei von oben nach unten durchzulesen.
* **Wie es funktioniert:** Man kann mit der Leertaste zur nächsten Seite springen.
* **Einschränkung:** Man kann fast nur nach vorne schauen. Wenn man eine Stelle oben im Text vergessen hat, kommt man mit `more` nicht so einfach wieder zurück nach oben. Wenn man am Ende des Textes ankommt, schließt sich das Programm meistens von selbst.



### less
- **Was es macht:** Es ist die verbesserte Version von `more`.
- **Wozu es dient:** Um Texte nicht nur zu lesen, sondern auch darin zu suchen und hin- und her zu springen.
- **Wie es funktioniert:**
    - Man kann **vorwärts und rückwärts** blättern (mit den Pfeiltasten oder der Taste **b**).
    - Es ist sehr **schnell**, auch wenn die Textdatei riesig ist, weil es nicht den ganzen Text auf einmal lädt.
    - Es bleibt am Ende der Datei offen, damit man in Ruhe zu Ende lesen kann. Man beendet es immer selbst mit der Taste **q**.



[Fach-Homepage🌐](https://www.franzmatejka.at/htl/doc/_SJ_2025/2AHITS_ITSI.html)


# Arbeitsbericht vom 21.01.2026

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: Replit & GitHub Pages

---

## 1. Schritt

- Sobald du eine Änderung an deinem Bericht durchführst, muss diese **"hochgeladen"** werden.

- **Git öffnen:** Klicke in Replit auf das **+** und suche nach **Git**
- ![grafik](grafik_2.png)
- ![grafik](grafik_3.png)


- **Commit erstellen:** Gib im Feld **"Summary"** eine kurze Nachricht ein (z. B. "Update" oder "Change"), damit du später weißt, was geändert wurde.
- ![grafik](grafik_4.png)

- **Bestätigen:** Klicke auf den blauen Button **"Stage and commit all changes"**.
- ![grafik](grafik_5.png)

- **Synchronisieren:** Drücke danach oben auf **"Sync Changes"**, um die Daten an GitHub zu senden.
- ![grafik](grafik_6.png)

- **Kontrolle:** Du kannst auf GitHub unter dem Reiter **"Actions"** live mitverfolgen, ob der Prozess (Build) erfolgreich durchläuft. Ein grüner Haken bedeutet, die Seite ist **bereit**. Wenn **kein** grüner Hacken dann ist es noch in **Bearbeitung**!
- ![grafik](grafik_7.png)


---


## 2. Schritt

Bevor du den Link zu einem speziellen Bericht hast, benötigst du die Adresse deiner Hauptseite.

- Gehe auf **GitHub** in dein **Repository** und klicke auf **Settings** (Zahnrad).

- Wähle links den Punkt **Pages** aus.

- Dort siehst du unter **"Your site is live at..."** deinen persönlichen **Basis-Link**. **Kopiere** diesen in einen **neuen Tab**.
- ![grafik](grafik_8.png)
- 

---


## 3. Schritt

Da dein Repository viele Dateien enthalten kann, musst du GitHub sagen, welche Datei genau angezeigt werden soll.

- **Pfad kopieren:** Gehe in GitHub zum Reiter **Code** und navigiere zu der Datei, die du abgeben möchtest und **kopiere den Pfad**(z. B. im Ordner Berichte).
- ![grafik](grafik_10.png)

- **URL zusammensetzen:** Füge den Pfad der Datei hinter deinen **Basis-Link (Kopierter Link im neuen Tab)** aus **Schritt 2** an.
- ![grafik](grafik_11.png)

- **Markdown zu HTML:** Wenn deine Datei auf GitHub .md (Markdown) heißt, musst du sie in der Adresszeile am Ende manuell in .html umbenennen,    
damit sie korrekt als Webseite angezeigt wird.

- **Beispiel:** Aus **.../Berichte/260223.md** wird in der Adresszeile **.../Berichte/260223.html**.
- ![grafik](grafik_12.png)# 2AHITS ITSI Übungen

[Fach-Homepage🌐](https://www.franzmatejka.at/htl/doc/_SJ_2025/2AHITS_ITSI.html)


# Arbeitsbericht vom 25.02.2026

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: Tools 2



## Übung 3.4 (find)

Setze das Arbeitsverzeichnis auf `~/workspace` und führe aus:

```sh
find -name "*.md"
```

Recherchiere zum `find` Befehl und löse folgende Aufgabenstellungen:

- Suche, von `~` (Homeverzeichnis) aus, nach

  - dem Directory mit dem Namen `profiles`
  - dem File mit dem Namen `.latest.json`
  - allen Files die auf `.json` enden
  - allen Directories
  - allen Markdown Files die in den letzten 4 Wochen geändert wurden
  - allen Directories die in den letzten 4 Wochen geändert wurden
  - allen Directories die in den letzten 4 Wochen nicht geändert wurden
  - allen Dateien mit der Berechtigung `644`. Recherchiere was diese Berechtigung (*permission flags*) bedeutet.


---

**Lösung:**
`$ find -name "*.md"`

```
./berichte/250917.md
./berichte/251001.md
./berichte/251015.md
./berichte/251105.md
./berichte/251119.md
...
```

`$ find ~ -type d -name "profiles"`

```
/home/runner/.local/state/nix/profiles
```

`$ find ~ -type f -name ".latest.json"`

```
/home/runner/workspace/.local/state/replit/agent/.latest.json
```

`$ find ~ -type f -name "*.json"`

```
/home/runner/workspace/.cache/replit/env/latest.json
/home/runner/workspace/.cache/replit/nix/dotreplitenv.json
/home/runner/workspace/.cache/replit/toolchain.json
/home/runner/workspace/.local/state/replit/agent/filesystem/filesystem_state.json
/home/runner/workspace/.local/state/replit/agent/.latest.json
```

`$ find ~ -type d`

```
/home/runner
/home/runner/.nix-defexpr
/home/runner/.cache
/home/runner/.cache/nix
/home/runner/.cache/snowflake
...
```

`$ find ~ -type f -name "*.md" -mtime -28`

```
/home/runner/workspace/berichte/250917.md
/home/runner/workspace/berichte/251001.md
/home/runner/workspace/berichte/251015.md
/home/runner/workspace/berichte/251105.md
/home/runner/workspace/berichte/251119.md
...
```

`$ find ~ -type d -mtime -28`

```
/home/runner
/home/runner/.cache
/home/runner/.cache/snowflake
/home/runner/workspace
/home/runner/workspace/.cache/replit
...
```

`$ find ~ -type d -mtime +28`

```
/home/runner/.nix-defexpr
/home/runner/.cache/nix
/home/runner/.local
/home/runner/.local/state
/home/runner/.local/state/nix
...
```

`$ find ~ -type f -perm 644`

```
/home/runner/.profile
/home/runner/.bash_logout
/home/runner/.cache/nix/fetcher-cache-v1.sqlite
/home/runner/.cache/nix/binary-cache-v6.sqlite
/home/runner/.cache/nix/fetcher-cache-v1.sqlite-journal
...
```

---

- Suche im `/usr` Verzeichnis nach allen Dateien die größer als 2MB sind.

- Lege in `~/workspace` ein Unterverzeichnis an. Erzeuge darin einige Dateien mit der Endung txt und md mit etwas Inhalt. Lösche dann mit Hilfe eines find Befehls alle txt Dateien die weniger als 10 Bytes groß sind. Wähle den Test so, dass minestens 2 Dateien gelöscht und mindestens 2 Dateien überbleiben.
  Hinweis: dafür ist die `-exec` Option zu verwenden.

- Schreibe einen find Befehl der den Inhalt aller Dateien mit Endung md zu einem neuen md File zusammenfügt.

- Zeige von allen Dateien (aber nicht Directories) im Directory `/var` die den Text `log` irgendwo im Dateinamen haben die vollständige Information (`ls -l`) an, die Ausgabe sieht dann ca. so aus:

  ```
  …
  -rw-r--r-- 1 root root 259 Apr 28  2024 /var/lib/dpkg/info/logsave.md5sums
  -rw-r--r-- 1 root root 33 May 30  2024 /var/lib/dpkg/info/login.conffiles
  -rwxr-xr-x 1 root root 174 May 30  2024 /var/lib/dpkg/info/login.postrm
  …
  ```

  **Lösung:**
  `$ find /usr -type f -size +2M`

  ```
  /usr/share/i18n/locales/iso14651_t1_common
  /usr/share/i18n/locales/cns11643_stroke
  /usr/lib/x86_64-linux-gnu/libcrypto.so.3
  /usr/lib/x86_64-linux-gnu/libc.so.6
  /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.33
  ...
  ```

  `$ mkdir -p ~/workspace/find_test`

  `$ cd ~/workspace/find_test`

  `$ echo "Dieser Text ist recht lang" > gross1.txt`
  
  `$echo "Dieser Text ist auch lang" > gross2.txt`
  
  `$echo "Hi" > klein1.txt`
  
  `$echo "Bye" > klein2.txt`

  `find . -type f -name "*.txt" -size -10c -exec rm {} \;`

  `$ ls -l`

  ```
  total 12
  -rw-r--r-- 1 runner runner  7 Feb 25 08:20 doku.md
  -rw-r--r-- 1 runner runner 27 Feb 25 08:23 gross1.txt
  -rw-r--r-- 1 runner runner 26 Feb 25 08:23 gross2.txt
  ```

  `$ find . -type f -name "*.md" ! -name "zusammenfassung.md" -exec cat {} + > zusammenfassung.md`# 2AHITS ITSI Übungen

[Fach-Homepage🌐](https://www.franzmatejka.at/htl/doc/_SJ_2025/2AHITS_ITSI.html)


# Arbeitsbericht vom xxx

- Name: Kevin Mitrovic
- Klasse: 2 AHITS
- Gruppe: 2
- Fach: ITSI Übungen
- Thema: xxx# Info
