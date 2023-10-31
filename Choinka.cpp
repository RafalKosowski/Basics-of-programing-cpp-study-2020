#include <iostream>
#include <locale.h> // biblioteka do polskich znaków diakrytycznych
#include "Functions.h"
using namespace std; // użyj przestrzeni nazw

void rysujChoinke()
{
	int liczba;											  // utworzenie zmiennej dla wysokości choinki
	cout << "Program rysuje choinkę z gwiazdek." << endl; // Komunikat

	// pobranie od użytkownika wysokości choinki
	cout << "Podaj wysokość choinki: ";
	cin >> liczba;
	cout << endl;
	if (liczba > 0)
	{									  // sprawdzenie, czy można narysować choinkę
		for (int i = 1; i <= liczba; i++) // pętla generująca kolejne wiersze choinki
		{
			for (int j = 1; j < liczba * 2; j++) // pętla generująca kolumny w danym wierszu choinki
			{
				if (i >= liczba - j + 1 && i >= j - liczba + 1)
				{ // wyświetlanie gwiazdek , kiedy będą spełnione warunki
					cout << "*";
				}
				else
				{ // wyświetlanie spacji, gdy warunek nie będzie spełniony
					cout << " ";
				}
			}
			cout << endl;
		}

		// pętla generująca spacje przed #
		for (int i = 1; i < liczba; i++)
		{
			cout << " ";
		}
		// wyświetlenie pieńka choinki
		cout << "#" << endl
			 << endl;
	}
	else
	{
		cout << "Nie mogę narysować choinki. Podąłeś za małą liczbę gwiazdek." << endl; // wyświetlenie komunikatu błędu
	}

	system("pause"); // zatrzymanie działania programu
}

// int main()
// {
// 	setlocale(LC_CTYPE, "Polish"); // ustawienie polskich znaków diakrytycznych
// 	system("color 02");			   // zmiana koloru konsoli systemu windows
// 	rysujChoinke();
// 	return 0;
// }
