#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int str[9] = {0x41,0x73,0x73,0x65,0x6D,0x62,0x6C,0x79,0xA};

    for (int i = 0; i < 9; i++)
    {
        printf("%c", str[i]);

    }

    return 0;
}
