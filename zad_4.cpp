#include <iostream>
#include <cmath>

using namespace std;



bool ispravanUnos(int bodovi, int maksimalnoBodova)
{
    if (maksimalnoBodova <= 0) return 0;
    if ((bodovi <= 0) || (bodovi > maksimalnoBodova)) return 0;
    return 1;

}

double izracunajPostotak(int bodovi, int maksimalnoBodova)
{

    return 100 * (bodovi / ((double) maksimalnoBodova));

}


int odrediOcjenu(double postotak)
{

    if (postotak < 50) return 1;
    if (postotak < 65) return 2;
    if (postotak < 80) return 3;
    if (postotak < 90) return 4;
    if (postotak <= 100) return 5;

}
void ispisiIzvjestaj(int bodovi, int maksimalnoBodova, double postotak, int ocjena)
{

        cout << "Bodovi: " << bodovi << " / " << maksimalnoBodova << endl;
        cout << "Postotak: " << postotak << " %\n";
        cout << "Ocjena: " << ocjena << endl;

}


int main()
{

    int bodovi, maksimalnoBodova,ocjena;
    double postotak;

    cout << "Unesi ostvarene bodove: ";
    cin >> bodovi;
    cout << "Unesi maksimalan broj bodova: ";
    cin >> maksimalnoBodova;

    if (!ispravanUnos(bodovi, maksimalnoBodova))
    {
        cout << "Neispravan unos podataka!\n";
        return 0;

    }

    postotak = izracunajPostotak(bodovi, maksimalnoBodova);
    ocjena = odrediOcjenu(postotak);
    ispisiIzvjestaj(bodovi, maksimalnoBodova, postotak, ocjena);


    return 0;
}
