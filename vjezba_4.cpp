#include <iostream>
#include <cmath>

using namespace std;

int main()
{

//    char str[9] = {0x41,0x73,0x73,0x65,0x6D,0x62,0x6C,0x79,0xA};
//
//    for (int i = 0; i < 9; i++)
//    {
//        cout << str[i];
//
//    }

    char A = 0x41;
    char s = 0x73;
    char e = 0x65;
    char m = 0x6D;
    char b = 0x62;
    char l = 0x6C;
    char y = 0x79;
    char line_feed = 0xA;

    cout <<A<<s<<s<<e<<m<<b<<l<<y << line_feed;

    return 0;
}
