#include <iostream>
#include <iomanip>

using namespace std;


const int CIJENA_ULAZNICE = 5;
const int PRAG_POPUSTA = 5;
const double STOPA_POPUSTA = 0.1;

int ukupnoUlaznica = 0;
double ukupniPrihod = 0;


bool ispravanUnos(int kolicina);
double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();


int main()
{

    int kupnja1_redniBroj = 1;
    int kupnja2_redniBroj = 2;
    int kupnja3_redniBroj = 3;

    int kupnja1_kolicina, kupnja2_kolicina, kupnja3_kolicina;
    double kupnja1_iznos, kupnja2_iznos, kupnja3_iznos;

    do {

        cout << "Kupnja 1 - unesi broj ulaznica (1-30): ";
        cin >> kupnja1_kolicina;

    } while (!ispravanUnos(kupnja1_kolicina));

    kupnja1_iznos = izracunajIznos(kupnja1_kolicina);
    evidentirajKupnju(kupnja1_kolicina, kupnja1_iznos);
    ispisiKupnju(kupnja1_redniBroj, kupnja1_iznos);

    do {

        cout << "Kupnja 2 - unesi broj ulaznica (1-30): ";
        cin >> kupnja2_kolicina;

    } while (!ispravanUnos(kupnja2_kolicina));

    kupnja2_iznos = izracunajIznos(kupnja2_kolicina);
    evidentirajKupnju(kupnja2_kolicina, kupnja2_iznos);
    ispisiKupnju(kupnja2_redniBroj, kupnja2_iznos);

    do {

        cout << "Kupnja 3 - unesi broj ulaznica (1-30): ";
        cin >> kupnja3_kolicina;

    } while (!ispravanUnos(kupnja3_kolicina));

    kupnja3_iznos = izracunajIznos(kupnja3_kolicina);
    evidentirajKupnju(kupnja3_kolicina, kupnja3_iznos);
    ispisiKupnju(kupnja3_redniBroj, kupnja3_iznos);

    ispisiSazetak();

    return 0;
}

bool ispravanUnos(int kolicina)
{
    return ((kolicina > 0) && (kolicina <= 30)) ? 1 : 0;
}

double izracunajIznos(int kolicina)
{
    double osnovniIznos, konacniIznos;

    osnovniIznos = kolicina * CIJENA_ULAZNICE;
    konacniIznos = osnovniIznos;
    if (kolicina >= PRAG_POPUSTA) {
            konacniIznos = konacniIznos * (1 - STOPA_POPUSTA);
    }

    return konacniIznos;

}

void evidentirajKupnju(int kolicina, double iznos)
{
    ukupnoUlaznica += kolicina;
    ukupniPrihod += iznos;

}

void ispisiKupnju(int redniBroj, double iznos)
{
    cout << "Kupnja " << redniBroj << ": " << fixed << setprecision(2) << iznos << " EUR\n";

}

void ispisiSazetak()
{
    cout << "\nUkupno prodanih ulaznica: " << ukupnoUlaznica << endl;
    cout << "Ukupni prihod: " << ukupniPrihod << " EUR\n";

}

