

// *==================================================*
//  Globalne i lokalne varijable - zadatak
// *==================================================*



/* *========================= 6 / 16 =========================*

#include <iostream>

void broji() {
    int brojac = 0;
    brojac++;
    std::cout << brojac << " ";
}
int main() {
    broji();
    broji();
    broji();

    return 0;

}


// Predviđeni ispis: 1 1 1

  *===========================================================*

*/



/* *========================= 10 / 16 =========================*

#include <iostream>

int bodovi = 10;
int main() {
    int bodovi = 3;
    std::cout << bodovi << " ";
    std::cout << ::bodovi;

    return 0;
}

// Predviđeni ispis: 3 10

  *===========================================================*

*/



/* *========================= 13 / 16 =========================*

#include <iostream>


using namespace std;


double prosjek(int prva, int druga)
{
    double rezultat = ((double) prva + druga) / 2;
    return rezultat;
}


int main()
{

    int prva, druga;
    cin >> prva >> druga;
    cout << prosjek(prva, druga) << endl;

    return 0;

}

  *===========================================================*

*/



/* *========================= 14 / 16 =========================*

#include <iostream>


void pripremi() {
    int temperatura = 22;
}
int main() {
    pripremi();
    std::cout << temperatura;

    return 0;
}

Temperatura nije globalna varijable te joj se iz funkcije main() ne može pristupiti.
Popravak:

#include <iostream>

int pripremi() {
    int temperatura = 22;
    return temperatura;

}

int main() {

    int temperatura = pripremi();
    std::cout << temperatura;

    return 0;
}

  *===========================================================*

*/



/* *========================= 16 / 16 =========================*

    1. Doseg varijable označuje djelove programa u kojima se varijable može pristupiti, a
       životni vijek je dio programa u kojem varijable postoji.

    2. Lokalna varijabla:

        int main() {

            int var;

            return 0;
        }

       Globalna varijabla:

       int var;

        int main() {

            return 0;
        }

    3. Upotrebom lokalnih varijabli smanjuje se mogućnost neželjenih promjena zato što
       se ograničava i uskračuje mogučnost pristupa zadanim varijablama.

  *===========================================================*

*/


