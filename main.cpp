#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    //string a = "sedam";
    // char a[10] = "sedam";

    // cout << a[10] << endl;

//    int n;
//    cin >> n;
//
//    if (n < 5)
//    {
//        cout << "Broj je manji od 5";
//
//    } else if (n == 5)
//    {
//        cout << "Broj je jednak 5";
//
//    } else if ((n > 5) && (n < 100))
//    {
//
//        cout << "Broje je veci od 5";
//
//    } else {
//        cout << "Broj je velik";
//
//    }


//    string a[] = {"jedan", "dva","tri"};
//
//    //cout << a[4];
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << a[i] << endl;
//

//    }
    string brand[] = {"G26", "Model S", "BENZ C-Class", "CX-6e", "CZ26"};
    string model[] = {"BMW", "Tesla", "Mercedes", "Mazda", "Ferrari"};

    for (int i = 0; i < model.len(); i++)
    {
        cout << "Brand: " << model[i] << ", Model: " << brand[i] << endl;

    }

    return 0;
}
