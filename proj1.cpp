#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	
	int Auswahl = 0;
	while (Auswahl != 4){      					//nach einer Optionsauswahl und Ausführung kehrt man dank der While-Schleife zum Menü zurück
	
    cout << "---------------------------------------------" << endl;
	cout << "--------------------Start--------------------" << endl;
    cout << "Wählen sie zwischen 1 und 4\n" << endl;
	cout << "(1) Warenverf\x81gbarkeit" << endl;        //Lagerbestände und Informationen werden ausgelesen
	cout << "(2) Konvertieren" << endl;         		//die Daten beider Datensätze werden in eine gemeinsame XML Instanz überführt
	cout << "(3) Hilfe" << endl;                		//Infos zu den Optionen und zum Programm
	cout << "(4) Beenden" << endl;						//Beenden der Schleife/des Programms  
	cout << "Eingabe: ";
	cin >> Auswahl;										//Eingabe des Users
	cout << endl;
	
	if (Auswahl == 1) {									
			cout << "Warenverf\x81gbarkeit: " << endl;
	
			string id, place, item, id2, place2, item2, id3, place3, item3, id4, place4, item4;		//Die fehlenden Variablen der CSV-Datei werden mithilfe von einzelnen Strings ergänzt
        																							//um das spätere Konvertieren in eine XML-Datei zu ermöglichen
			ifstream myfile("proj1.csv"); 
			myfile >> id; 
			myfile >> place;
			myfile >> item;
			myfile >> id2; 
			myfile >> place2;
			myfile >> item2;
			myfile >> id3; 
			myfile >> place3;
			myfile >> item3;	
			myfile >> id4; 
			myfile >> place4;
			myfile >> item4;
		
			cout << "<stock>" << endl;
			cout << "<item id='" << id << "' place='" << place << "'> " << item << " </item>" << endl;
			cout << "<item id='" << id2 << "' place='" << place2 << "'> " << item2 << " </item>" << endl;
			cout << "<item id='" << id3 << "' place='" << place3 << "'> " << item3 << " </item>" << endl;
			cout << "<item id='" << id4 << "' place='" << place4 << "'> " << item4 << " </item>" << endl;
        	cout << "</stock>" << endl;				
				
		}
		
		else if (Auswahl == 2){
			cout << "Konvertieren:" << endl;
			
		ofstream neuedatei;  //output file stream zum Lesen aus der Datei
		string dateiname;
		string line;
		string csvfile;
		string place, item, place2, item2, place3, item3, place4, item4;
		int id, id2, id3, id4;
		
		cout << "Vergeben Sie einen Dateinamen mit der Endung .xml: ";
		cin >> dateiname;
		cout << endl;
		
		neuedatei.open(dateiname.c_str(), ios_base::out);
		
		if(!neuedatei) {
			cerr << "Datei konnte nicht erstellt werden." << endl;
			getchar();
		}
		
		ifstream xmldatei("proj1.xml");  //input file stream zum Schreiben in die Datei
		if (xmldatei.is_open()){
			while (getline(xmldatei,line)){
				neuedatei << line << '\n';
			}
		}
		//xmldatei.close();
	    
	
		ifstream myfile("proj1.csv"); 
		 
		 	myfile >> id;
			myfile >> place;
			myfile >> item;
			myfile >> id2; 
			myfile >> place2;
			myfile >> item2;
			myfile >> id3;
			myfile >> place3;
			myfile >> item3;
			myfile >> id4;	 
			myfile >> place4;
			myfile >> item4;
		
			
			neuedatei << "<stock>" << endl;
			neuedatei << "<item id='" << id << "' place='" << place << "'> " << item << " </item>" << endl;
			neuedatei << "<item id='" << id2 << "' place='" << place2 << "'> " << item2 << " </item>" << endl;
			neuedatei << "<item id='" << id3 << "' place='" << place3 << "'> " << item3 << " </item>" << endl;
			neuedatei << "<item id='" << id4 << "' place='" << place4 << "'> " << item4 << " </item>" << endl;
        	neuedatei << "</stock>" << endl;	
        	
        	cout << "Die Xml-Datei wurde erstellt." << endl;
        	xmldatei.close();
			neuedatei.close();
			
			//DTD neu definieren: (für ziel.xml)
			std::ofstream file;
			file.open("proj1.dtd");
			file << "<!ELEMENT listProducts (product)+>" << endl;
			file << "<!ELEMENT product (info,stock)>" << endl;
			file << "<!ATTLIST product " << endl;
  			file << " id CDATA #REQUIRED>" << endl;
			file << "<!ELEMENT info (type,color,desc,price)>" << endl;
			file << "<!ELEMENT stock (item)>" << endl;
			file << "<!ELEMENT type (#PCDATA)>" << endl;
			file << "<!ELEMENT color (#PCDATA)>" << endl;
			file << "<!ELEMENT desc (#PCDATA)>" << endl;
			file << "<!ELEMENT price (#PCDATA)>" << endl;
			file << "<!ELEMENT item (#PCDATA)>" << endl;
			file << "<!ATTLIST item " << endl;
  			file << " id CDATA #REQUIRED " << endl;
  			file << " place NMTOKEN #REQUIRED>" << endl;
			file.close();
				
			
		}
		
		else if (Auswahl == 3){
			char Auswahl3;									//Auswahl3 ermöglicht die Auswahl zwischen 2 Hilfs-Informationen
				
			cout << "Hilfeeinstellungen: " << endl;
			cout << "(1)Bedienungshilfe" << endl;
			cout << "(2)Programminformationen" << endl;
			cout << "\nEingabe: ";
			cin >> Auswahl3;
			cout << "-------------------" << endl;
			
			switch(Auswahl3){
				
		case('1'):{															    //Informationen zu den einzelnen Optionen und dem Programm selbst
			cout << "Informationen zu den einzelnen Optionen: " << endl;		//werden hier für den User aufgelistet
			cout << "OPTION 1: " << endl;
			cout << "Die 1. Option ermöglicht das Auslesen von Lagerbeständen und ihren Lagerorten, sowie der Mengenangabe." << endl;
			cout << "OPTION 2: " << endl;
			cout << "Die zweite Option überführt die Inhalte der Datensätze in eine gemeinsame XML-Instanz." << endl;
			cout << "OPTION 3: " << endl;
			cout << "Die dritte Option hilft dem User, die Funktionen und den Sinn dieses Programmes zu verstehen. Hier sind alle relevanten Informationen festgehalten." << endl;
			cout << "OPTION 4: " << endl;
			cout << "Die vierte und letzte Option beendet das Programm und löscht gleichzeitig den bisherigen Verlauf." << endl;
			break;
		 }
		
		case('2'):{
			cout << "Informationen zu dem Programm: " << endl;
			cout << "Allgemeine Informationen,sowie den gesamten Quellcode und die dazugehörigen Dateien zum Programm finden sie unter dem Web-Link: https://github.com/mbuac/Semesterarbeit" << endl;
			break;
		 }
		}	
			
		}   
		               
		else if (Auswahl == 4){
			cout << "Beenden des Programms." << endl;
		    system("cls");										//Der bisherige Programmverlauf wird gelöscht und beendet
        }

	}	
	return 0;
}
