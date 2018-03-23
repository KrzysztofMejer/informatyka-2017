#include <iostream>

using namespace std;


int T1[5];

int filling() {

    for (int i=0; i<5; i++)
    {
        cout<<"Podaj "<<i<<" wyraz tablicy : ";
           cin>>T1[i];
    }
}

int see() {

    for (int i=0; i<5; i++)
        {
            cout<<" "<<i<<" element tablicy : "<<T1[i]<<endl;
        }

}

int main()
{
   int T [10] = {5,4,7,-10,0,8};
   cout<<T[1]<<endl;
   double tab[5] = {1.5, 2, 2.99,};
   cout<<tab[1]<<endl;
   int tab1[] = {8,1,3};
   tab1[2] = 5;
   tab1[3] = 22;
   cout<<tab1[2]<<endl;
   int tab2[4] = {1};
   cout<<tab2[0]<<endl;

   int nowa[3];
   cout<<"Podaj pierwszy element tablicy : ";
   cin>>nowa[0];
    cout<<"Podaj drugi element tablicy : ";
   cin>>nowa[1];
    cout<<"Podaj trzeci element tablicy : ";
   cin>>nowa[2];

   int i = 0;

   int poj = 3;

   // poj -> pojemnoœæ tablicy

   for(int i=0; i<poj; i++)
        {
            cout<<nowa[i]<<" ";
        }

    cout<<endl;
    cout<<endl;
    filling();
    cout<<endl;
    see();



}

