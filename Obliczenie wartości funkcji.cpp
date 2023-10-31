#include <iostream>
#include <locale.h>

using namespace std;
void owf(){
    float start, koniec, skok, a, wynik;
    //komuniktay i pobranie danych
    cout << "Moim zadaniem jest obliczenie wartości funkcji f(x) =  (x + a) / ( (x - 2) * (x - 2) ) "<<endl;
    cout << "Potrzebuję kilku danych."<<endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj początek zakresu:";
    cin >> start;
    cout << "Podaj koniec zakresu:";
    cin >> koniec;
    cout << "Podaj skok:";
    cin >> skok;

    if (start > koniec) // sprawdzenie czy użytkownik podał poprawnie start i koniec i ewentualnie 
    {
        float z;
        z = koniec;
        koniec = start;
        start = z;
    }

    for (int x = start; x <= koniec; x+=skok) 
    {
        if (x == 2)// uniknięcie dzielenia przez 0
        {
            cout<<"Nie można policzyć f(x) dla x =2"<<endl;
            continue;
        }
         

        wynik = (x + a) / ((x-2)*(x-2));//obliczenie wartości funkcji
        cout << "x = " << x <<" f(x) = " <<wynik << endl; // wyświetlenie wyniku
    }
}

// int main()
// {
//     setlocale(LC_CTYPE, "polish"); //polskie znaki w konsoli
    
//     owf();

//     return 0;
// }
