#include <iostream>


using namespace std;


int zbroji(int *niz, int n)
{
  int zbroj = 0;
  for (int i = 0; i < n; i++)
  {
    zbroj += niz[i];
    
  }

  return zbroj;

}

int main()
{

  int niz1[] = {1,2,3,4,5,6,7,8,9,10};
  int niz2[] = {11,12,13,14,15,16,17,18,19,20};
  int n = 10;

  int zbroj = zbroji(niz1, n) + zbroji(niz2, n);
  cout << zbroj << endl;
  
  return 0;
  
}
