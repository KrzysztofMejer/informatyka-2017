#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int zmienna1;
   for ( zmienna1 = 10; zmienna1 <100; zmienna1+=5 ) {
    cout<<setw(5)<<zmienna1;
    //setw rezerwuje ilo�� znak�w dla wy�wietlanej fukncji
    if (zmienna1==50)
        break;

   }
}


