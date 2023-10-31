#include <iostream>
#include<locale.h> // biblioteka do polskich znaków
using namespace std;

//utworzenie zmiennych
double a, b;
char menu; 

void kalkulator(){
	//pobranie liczb od użytkownika
	cout << "Podaj liczbe pirerwszą: ";
	cin >> a;
	cout << "Podaj liczbe drugą: ";
	cin >> b;

	//menu (jakie działanie ma wykonać program)
	cout << "wybierz dzialanie:" << endl;
	cout << "dodaj(+)" << endl;
	cout << "odejmij(-)" << endl;
	cout << "pomnóż(*)" << endl;
	cout << "podziel(/)" << endl;
	cin >> menu;

	system("cls"); // czyszczenie ekranu

	// obliczanie 
	switch (menu) {
		case '+':
			cout << a << "+" << b << "=" << a + b << endl; //wyświetlenie wyniku dodawania
			break;
		case '-': 
			cout << a << "-" << b << "=" << a - b << endl; //wyświetlenie wyniku odejmowania
			break;
		case '*': 
			cout << a << "*" << b << "=" << a * b << endl; //wyświetlenie wyniku mnożenia
			break;
		case '/': 
			if (b!=0) // sprawdzenie czy użytkownik nie dzieli przez 0
			{
				cout << a << "/" << b << "=" << a / b << endl; //wyświetlenie wyniku dzielenia
			}
			else 
			{
				cout << "Nie dziel przez 0 !!!" << endl; //Komunikat przy dzieleniu przez 0
			}
			
			break;
		default: 
			cout << "To działanie jest niedozwolone." << endl; //komunikat błedu
	}
}
// int main() {

// 	setlocale(LC_CTYPE, "Polish"); // ustawienie polskich znaków 

// 	system("color 30");//zmiana koloru konsoli windows

// 	kalkulator();
		
// 	system("pause"); // zatrzymnaie programu do momentu naciśnięcia klawisza

// 	return 0;
// }
