#include <iostream>
#include <cmath>

using namespace std;



double izracunajStavku(double cijena, int kolicina)
{

    return cijena * kolicina;

}
double izracunajMeduzbroj(double stavka1, double stavka2, double stavka3)
{
    return stavka1 + stavka2 + stavka3;

}
double odrediStopuPopusta(double meduzbroj)
{
    return (meduzbroj >= 100) ? 0.10 : 0.0;

}
double izracunajKonacniIznos(double meduzbroj)
{
    return meduzbroj * (1 - odrediStopuPopusta(meduzbroj));

}
void ispisiRacun(double stavka1, double stavka2, double stavka3, double meduzbroj, double konacniIznos)
{

    cout << "\nStavka 1: " << stavka1 << " EUR\n";
    cout << "Stavka 2: " << stavka2 << " EUR\n";
    cout << "Stavka 3: " << stavka3 << " EUR\n";
    cout << "Meduzbroj: " << meduzbroj << " EUR\n";
    cout << "Popust: " << meduzbroj - konacniIznos << " EUR\n";
    cout << "Za platiti: " << konacniIznos << " EUR\n";

}


int main()
{


    double cijene[3]; // cijena1, cijena2, cijena3
    double kolicine[3]; // kolicina1, kolicina2, kolicina3
    double stavka1, stavka2, stavka3, meduzbroj, konacanIznos;

    for (int i = 0; i < 3; i++)
    {

        double cijena;
        double kolicina;
        do {

            cout << "Proizvod " << i + 1 << " - cijena i kolicina: ";
            cin >> cijena >> kolicina;

        } while ((cijena < 0) || ((kolicina - (int) kolicina) != 0) || (kolicina <= 0));

        cijene[i] = cijena;
        kolicine[i] = kolicina;

    }

    stavka1 = izracunajStavku(cijene[0], kolicine[0]);
    stavka2 = izracunajStavku(cijene[1], kolicine[1]);
    stavka3 = izracunajStavku(cijene[2], kolicine[2]);
    meduzbroj = izracunajMeduzbroj(stavka1, stavka2, stavka3);
    konacanIznos = izracunajKonacniIznos(meduzbroj);
    ispisiRacun(stavka1, stavka2, stavka3, meduzbroj, konacanIznos);

    return 0;
}
