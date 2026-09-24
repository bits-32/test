#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int ocjene[] = {5,5,4,4,3,3,2,2,1,1,7};
    int brojOcjena = sizeof(ocjene) / sizeof(ocjene[0]);
    double sum = 0;

    for (int i = 0; i < brojOcjena; i++) sum += ocjene[i];
    double prosjek = round(sum / brojOcjena);
    double prosjek_bez = sum / brojOcjena;

    cout << prosjek << " " << prosjek_bez << endl;

    return 0;
}
