#include <iostream>

using namespace std;

double prosjek(int prva, int druga)
{

    return ((double) prva + druga) / 2;

}

int main()
{

    int prva, druga;
    cin >> prva >> druga;
    cout << prosjek(prva, druga);

    return 0;
}
