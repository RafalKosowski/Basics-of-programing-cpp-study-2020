#include <iostream>
#include <math.h>
using namespace std;

void rownanieKwadratowe()
{
  double a, b, c, delta, x1, x2, x0; // utworzenie zmiennych

  // pobranie danych od uytkownika
  cout << "Podaj a:";
  cin >> a;
  cout << "Podaj b:";
  cin >> b;
  cout << "Podaj c:";
  cin >> c;

  // obliczenie delty
  delta = b * b - (4 * a * c);

  if (a != 0) // sprawdzenie czy jest to równaie kwadratowe
  {

    if (delta > 0) // sprawdzenie czy delta jest dodatnia
    {
      x1 = ((-1 * b) - (1 * sqrt(delta))) / (2 * a);                                      // obliczenie pierwszego pierwiastka równania
      x2 = ((-1 * b) + sqrt(delta)) / (2 * a);                                            // obliczenie drugiego pierwiastka równania
      cout << "Rozwiązaniem równania są pierwiastki x1=" << x1 << " i x2=" << x2 << endl; // wyświetlenie wyniku
    }
    else if (delta == 0) // sprawdzenie czy delta jest równa 0
    {
      x0 = (-1 * b) / (2 * a);
      cout << "Rozwiązaniem równania jest x0=" << x0 << endl; // wyświetlenie wyniku
    }
    else
    {                                                      // pozostałe przypadki(czyli delta jest ujemna)
      cout << "Delta jest ujemna. Brak rozwiązań" << endl; // wyświetlenie wyniku
    }
  }
  else
  {
    cout << "Liczba a = 0. Nie jest to równanie kwadratowe" << endl; // wyświetlenie wyniku
  }
}
// int main()
// {

//   rownanieKwadratowe();
//   return 0;
// }