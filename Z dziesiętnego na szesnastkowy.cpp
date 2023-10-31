#include <iostream>
#include <locale.h>

using namespace std;

string liczba1;
int tablica[600];
int ad = 0;

string convertToHex( int liczba )
{

	while (liczba)
	{
		//wyliczenie w postaci hex (wynik od tyłu)
		tablica[ad] += liczba % 16;
		liczba /= 16;
		ad++;
	}

	// zamiana cyfr na tekst i odwrócenie cyfr do właściwej postaci
	for (int b = ad - 1; b >= 0; b--) 
	{
		
		switch (tablica[b]) {
			case 0: liczba1 += "0"; break;
			case 1: liczba1 += "1"; break;
			case 2: liczba1 += "2"; break;
			case 3: liczba1 += "3"; break;
			case 4: liczba1 += "4"; break;
			case 5: liczba1 += "5"; break;
			case 6: liczba1 += "6"; break;
			case 7: liczba1 += "7"; break;
			case 8: liczba1 += "8"; break;
			case 9: liczba1 += "9"; break;
			case 10: liczba1 += "A"; break;
			case 11: liczba1 += "B"; break;
			case 12: liczba1 += "C"; break;
			case 13: liczba1 += "D"; break;
			case 14: liczba1 += "E"; break;
			case 15: liczba1 += "F"; break;
		}

	}

	return liczba1;
}

void convertResult(){
	int liczba1;

	// pobraniue danych od urzytkownika
	cout << "Podaj liczbę w postaci dziesiętnej: ";
	cin >> liczba1;

	// wyświetlenie cyfry w postaci szesnastkowej
	cout <<"Liczba w postaci szesnastkowej: "<< convertToHex(liczba1)<<endl;
}

// int main()
// {
// 	setlocale(LC_CTYPE, "Polish"); // polskie znaki
// 	convertResult();

// }
