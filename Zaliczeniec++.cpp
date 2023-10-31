#include <iostream>
#include <math.h>
#include <iomanip>  
#include <locale.h>

using namespace std; // użycie przestrzeni nazw std

//Tworzenie funkcji
void opcjaA();
void opcjaB();
void opcjaC();
void opcjaD();
bool testuj(float zmienna1,float zmienna2);
void pobierzDane();

//utworzenie zmiennych
float aa, n,x,x2[5], wynik;
int start,stop,skok;
char menu2;

// int main()
// {
// 	setlocale(LC_CTYPE, "Polish");//polskie znaki w konsoli
	

// 	cout << "Rafał Kosowski \n "; // wypisanie imienia i nazwiska autora na ekranie
// 	pobierzDane();
// }

void opcjaA()
{
	//pobranie potrzebnych danych
	cout << "Podaj  wartość współczynnika a: ";
	cin >> aa;
	cout << "Podaj wartość współczynnika n: ";
	cin >> n;

	cout << "f(x)= (X^"<<n<<" -1)/("<<aa<<"X^3-3)"; // wyświetlenie funkcji
	
	cout << "Podaj wartość współczynnika x: ";
	cin >> x;
	// testowanie poprawności danych
	if (testuj(aa,x) == false)
	{
		cout << "Podano niewłaściwą wartość a lub x. \n";
		cout << "Kończę działanie programu ... ";
		cout << "Rafał Kosowski 23";
		exit;
	}
	else
	{
		cout << "Dane poprawne\n";
		pobierzDane();
	}

}

void opcjaB()
{
	//pobranie danych
	cout << "Podaj  wartość współczynnika a: ";
	cin >> aa;
	cout << "Podaj wartość współczynnika n: ";
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cout << "Podaj wartość współczynnika x: ";
		cin >> x2[i];
		//test poprawnych danych
		if (testuj(aa,x2[i]) == false)
		{
			i--;
		}
	}
	cout << "| LP |  x  |    f(x)     |\n";
	for (int i = 0; i < 5; i++)
	{
		wynik = (pow(x2[i], n)-1)/(aa*pow(x2[i],3)-3);
		cout << "| "<<i<<" | "<<x2[i]<<"| "<< wynik <<" |\n";
	}

}

void opcjaC()
{
	
	cout << "Podaj  wartość współczynnika a: ";
	cin >> aa;
	cout << "Podaj wartość współczynnika n: ";
	cin >> n;
	cout << "Podaj  wartość początkową x: ";
	cin >> start;
	cout << "Podaj wartość końcową x: ";
	cin >> stop;
	cout << "Podaj skok: ";
	cin >> skok;
	cout << "| LP |  x  |    f(x)     |\n";
	int z = 0;
	for (int i = start; i < stop; i+=skok)
	{
		
		 x2[z]=i;
		 z++;
	}
	z = 0;
	for (int i = 0; i < 5; i++)
	{
		wynik = (pow(x2[i], n) - 1) / (aa * pow(x2[i], 3) - 3);
		cout << "| " << i << " | " << x2[i] << "| " << wynik << " |\n";
	}
}

void opcjaD()
{
	exit;
}
bool testuj(float zmienna1,float zmienna2)
{
	if (zmienna1 == 3 && zmienna2 == 1)
		return false;
	if (zmienna1 == 1 && zmienna2 == pow (3,1/3))
		return false;
	return true;
}

void pobierzDane()
{
	cout << "Co mam teraz zrobić? \n";
	cout << "a. Sprawdź wykonalność funkcji f(x)= (X^n -1)/(aX^3-3)  \n";
	cout << "b. Oblicz wartośc ww. funkcji f(x) dla podanych wartości\n";
	cout << "c. Oblicz wartość ww. funkcji f(x) dla przedziału podanego z klawiatury \n";
	cout << "d. Koniec pracy programu \n";
	//wybranie opcji w menu
	cin >> menu2;
	switch (menu2)
	{
	case 'a':
		opcjaA();
		break;
	case 'b':
		opcjaB();
		break;
	case 'c':
		opcjaC();
		break;
	case 'd':
		opcjaD();
		break;
	default:
		cout << "Wybrałeś nieprawidłową opcję.\n";
		break;
	}
	
}
