# Semesterarbeit
C++ Semesterarbeit
Merve Buacan, 7329163

In  meiner  Semesterarbeit  für  das  C++ Seminar des Sommersemesters  2018 beschränke  ich  mich bezüglich des ersten Aufgabenteiles, der unter der Internetadresse: http://hki.uni-koeln.de/c-semesterarbeit-sose-2018 einsehbar ist, innerhalb meines Projektes auf einen Anwendungsfall, der beispielsweise im Betrieb eines Textil-Unternehmens sehr sinnvoll sein kann. Als Datenquellen fungieren die beiden Datenquellen: proj1.xml, proj1.dtd und proj1.csv. In meiner XML-Datei sind die Daten der
einzelnen  Produkte  aufgeführt,  die  vom  Unternehmen  angeboten  werden.  Mithilfe  der
unterschiedlichen Tags wie: type, desc, color, size, price  können die ausschlaggebenden Eigenschaften
der Produkte variieren. Durch die Vergabe individueller  xml:id  Werte innerhalb des Kindelementes
<product> kann für jedes einzelne Produkt eine spezifische Artikelnummer hinterlegt werden, welche
dem  System  im  Folgendem  Berechnungen  und  Suchvorgänge  der  Datensätze  ermöglicht.  In  der
dazugehörigen proj1.dtd sind alle Elemente der XML-Datei exakt definiert. Innerhalb meiner proj1.csv
sind vier Artikel mit vorangestellten ID´s und (ganz rechts) ihre Mengen in Textform als Lagerbestände aufgelistet. A1, A2 und A3 stehen in dieser Datei für die verschiedenen Abteilungen, in welchen sich die Ware befindet. 
  
Das  Ziel  meines  CLI  wird  sein,  für  das  Unternehmen  sinnvolle  und  hilfreiche  Funktionen  zu
ermöglichen,  die  die  Arbeit  mit  verschiedenen  Produkten  erleichtern  soll.  Die  hinterlegten
Informationen meiner beiden Datenquellen sollen  ausgelesen,  durchsucht  und
miteinander berechnet werden können, sodass ein neues Format mit sinnvoll zusammengeführtem
Inhalt ausgegeben werden kann. Dies wird in Form einer XML-Datei realisiert, indem der User einen Namen für eine neu zu erstellende Datei eingibt. Innerhalb der Datei zielxml.xml kann die Datei, die mithilfe des zweiten Menüpunktes "Konvertieren" erstellt werden soll, vorab eingesehen werden.

Mithilfe einer Menüführung ermöglicht das Programm folgende Funktionen:

OPTION 1: Die 1. Option ermöglicht das Auslesen von Lagerbeständen und ihren Lagerorten, sowie der Mengenangabe.

OPTION 2: Die zweite Option überführt die Inhalte der Datensätze in eine gemeinsame XML-Instanz.

OPTION 3: Die dritte Option hilft dem User, die Funktionen und den Sinn dieses Programmes zu verstehen. Hier sind alle relevanten Informationen festgehalten.

OPTION 4: Die vierte und letzte Option beendet das Programm und löscht gleichzeitig den bisherigen Verlauf.


Ziel dieses Projekts:

Programmierung eines Command Line Interfaces (CLI). Das Programm soll Informationen aus zwei unterschiedlichen Datenquellen (1) auslesen,  (2) zwischenspeichern, (3) durchsuchen und anschließend (3) in ein neues Format überführen können. Eine der Datenquellen muss eine XML-Datei (mit zugehöriger DTD) sein. Das neue Format muss ebenfalls vom Typ XML sein und die Daten der Ursprungsdateien sinnvoll zusammenführen.


Realisierte Funktionen:

1. Entwerfen und beschreiben Sie einen konkreten Anwendungsfall für Ihr Programm. Die Ergebnisse sollten aus dem README.md file in GitHub ersichtlich und nachvollziehbar sein.

2. Legen Sie zwei unterschiedliche Datenquellen an. Eine Datenquelle muss eine XML-Instanz mit Dokumenttypdefinition (DTD) sein, die andere ein CSV-Format (Legen Sie die Datenquellen mit Blick auf Stufe IV an! ).

3. Die Komplexität Ihrer Datensätze darf die der Beispiele des vergangenen Jahres nicht unterschreiten: http://hki.uni-koeln.de/cpp-ws1718-task/

Hinweis: Wenn Sie auf Schwierigkeiten mit Ihren XML-Instanzen stoßen, kann sich ein Blick in Ihre BSI-Unterlagen aus dem 1. Semester lohnen.

4. Lesen Sie die Daten mit Hilfe eines Parsers ein und ermöglichen Sie folgende Operationen:

4.1 Menüführung: Ein Menü startet verschiedene Abläufe im Programm und kehrt danach ins Menü zurück.

4.2 Konvertieren: Das Programm fragt nach Name und Pfad der Ausgabe und exportiert die Informationen aus beiden Datensätzen in einer neuen, vereinten XML Instanz, welche Sie inkl. DTD definieren.
