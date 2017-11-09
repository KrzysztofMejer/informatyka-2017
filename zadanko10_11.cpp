#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int iloscwierszy,iloscliczb,lmin,lmax,wylosowanaliczba,i,j;
   cout<<"Podaj ilosc wierszy"<<endl;
   cin>>iloscwierszy;
   cout<<"Podaj ilosc liczb w wierszu"<<endl;
   cin>>iloscliczb;
   cout<<"Podaj poczatek przedzialu"<<endl;
   cin>>lmin;
   cout<<"Podaj koniec przedzialu"<<endl;
   cin>>lmax;
   cout<<endl;

   for (i=1;i<=iloscwierszy;i++) {
    for (j=1;j<=iloscliczb;j++) {
   wylosowanaliczba = lmin+rand()%(lmax-lmin+1);
   cout<<wylosowanaliczba<<" ";
    }
    cout<<endl;
   }
   return 0;
}
