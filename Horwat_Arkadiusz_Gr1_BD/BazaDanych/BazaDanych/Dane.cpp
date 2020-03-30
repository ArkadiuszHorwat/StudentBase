#include "pch.h"
#include "Dane.h"



//void start()
//{
//	//wczytaj z pliku
//	//wczytaj licznikID
//
//}

void dodajStudenta()
{
	Student tmp;
	tmp.id = licznikID;
	licznikID++;
	cout << "Podaj nazwisko studenta: ";
	cin >> tmp.nazwisko;
	cout << "Podaj specjalnosc studenta: ";
	cin >> tmp.specjalnosc;
	cout << "Podaj srednia ocene studenta: ";
	cin >> tmp.srednia;
	lista.push_back(tmp);
	cout << "Dodano studenta" << endl;
}

void wyswietl()
{
	for (vector<Student>::iterator iterator = lista.begin(); iterator != lista.begin(); iterator++)
		cout << (iterator)->id << "\t" << iterator->nazwisko << "\t" << iterator->specjalnosc << "\t" << iterator->srednia << endl;
 }
