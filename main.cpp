#include <iostream>
#include <cmath>

using namespace std;


double log_b(double baza, double broj)
{

    return (log(broj) / log(baza));

}


int main()
{

    double broj = 1 / 3;

    cout << pow(2, 10) << endl; // Potenciranje
    cout << sqrt(4) << endl; // Drugi korijen
    cout << cbrt(4) << endl; // Treæi korijen
    cout << hypot(5, 5) << endl; // Hipotenuza pravokutnog trokuta
    cout << abs(-456) << endl; // Apsolutna vrijednost
    cout << round(3.5) << endl; // Zaokruživanje broja
    cout << ceil(3.1) << endl;
    cout << floor(3.9) << endl;

    // Trigonometrijske funkcije
    cout << sin(45) << endl;
    cout << cos(30) << endl;
    cout << tan(70) << endl;

    cout << log(2) << endl; // Prirodni logaritam
    cout << log10(100) << endl; // Logaritam s bazom 10
    cout << log_b(10, 50) << endl; // Logaritam bilo koje baze

    cout << min(2,3) << endl; // Minimalna vrijednost
    cout << max(2,3) << endl; // Maksimalna vrijednost

    return 0;
}
