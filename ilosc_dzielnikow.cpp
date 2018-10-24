#include <iostream>
#include <cmath>

using namespace std;

int dzielenie (int n) {

    int d = 0;
    int i = 1;
    for(i; i<=n; i++)
        if(n % i == 0)
            d++;
    return d;
}

int main() {

    int n;
   cout<<"Podaj liczbe"<<endl;
   cin>>n;
   int id=dzielenie(n);
   cout<<"Liczba dzielnikow : "<<id<<endl;
   if (id==2) cout<<"Liczba pierwsza";
    else if (id>2) cout<<"Liczba zlozona";
   else cout<<"ani pierwsza, ani zlozona";
    return 0;
}
