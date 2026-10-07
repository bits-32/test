#include <iostream>

using namespace std;

double zbroji(double a, double b) {return a + b;}
double oduzmi(double a, double b) {return a - b;}
double pomnozi(double a, double b) {return a * b;}
double podijeli(double a, double b) {return a / b;}
void ispisiRezultat(double rezultat) {cout << rezultat << endl;}

int main()
{


    double a, b;
    cout << "Unesite dva broja: ";
    cin >> a >> b;

    cout << "Zbroj: ";
    ispisiRezultat(zbroji(a, b));
    cout << "Razlika: ";
    ispisiRezultat(oduzmi(a, b));
    cout << "Umnozak: ";
    ispisiRezultat(pomnozi(a, b));

    if (b == 0)
    {
        cout << "Dijeljenje s nulom nije moguce!\n";
        return 0;
    }

    cout << "Kolicnik: ";
    ispisiRezultat(podijeli(a, b));

    return 0;
}
