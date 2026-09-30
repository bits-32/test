#include <iostream>
#include <cmath>


using namespace std;

int main()
{


    const double pi = 3.14159265359;
    double a, b, opseg, povrsina, nasuprotniKut;

    cout << "Unesite prvu katetu: ";
    cin >> a;
    cout << "Unesite drugu katetu: ";
    cin >> b;

    auto c = sqrt(pow(a, 2) + pow(b, 2));
    opseg = a + b + c;
    nasuprotniKut = asin(a / c) * (180 / pi);
    povrsina = (a * b) / 2;

    cout << "\nHipotenuza je: " << c << endl;
    cout << "Opseg trokuta je: " << opseg << endl;
    cout << "Povrsina trokuta je " << povrsina << endl;
    cout << "Kut nasuprot kateti a je: " << nasuprotniKut << " stupnjeva\n";


    return 0;


}



