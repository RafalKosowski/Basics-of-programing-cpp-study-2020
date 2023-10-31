#include <iostream>
#include <locale.h> // biblioteka do polskich znaków diakrytycznych
// #include "Functions.h"
#include "Choinka.cpp"
#include "Kalkulator.cpp"
#include "Obliczenie wartości funkcji.cpp"
#include "Równaie kwadratowe.cpp"
#include "Z dziesiętnego na szesnastkowy.cpp"
#include "Zaliczeniec++.cpp"

using namespace std; // użyj przestrzeni nazw

int main()
{
	unsigned short selectedMenuOption;
	// setlocale(LC_CTYPE, "Polish"); // ustawienie polskich znaków diakrytycznych
	setlocale(LC_CTYPE, "pl_PL.UTF-8");
	system("color 02"); // zmiana koloru konsoli systemu windows
	// add loop
	while (true)
	{
		system("cls");
		cout << "Wybierz co mam zrobić" << endl;
		cout << "1.Choinka" << endl;
		cout << "2.Kalkulator" << endl;
		cout << "3.Obliczenie wartości funkcji" << endl;
		cout << "4.Równanie kwadratowe" << endl;
		cout << "5.Konwenter z systemu dziesiętnego na szesnastkowy" << endl;
		cout << "6.Zaliczenie" << endl;
		cout << "0.Zaliczenie" << endl;
		cout << "Wybrana opcja: ";
		cin >> selectedMenuOption;
		// add if to exit loop
		switch (selectedMenuOption)
		{
		case 0: // eixt loop
			return 0;
			break;
		case 1:
			rysujChoinke();
			break;
		case 2:
			kalkulator();
			system("pause");
			break;
		case 3:
			owf();
			system("pause");
			break;
		case 4:
			rownanieKwadratowe();
			system("pause");
			break;
		case 5:
			convertResult();
			system("pause");
			break;
		case 6:
			pobierzDane();
			system("pause");
			break;
		default:
			cout << "Ta opcja jest nidostępna. Wybierz inną" << endl;
			system("pause");
			break;
		}
	}

	return 0;
}