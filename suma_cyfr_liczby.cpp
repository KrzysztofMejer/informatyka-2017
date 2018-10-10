#include <iostream>
#include <cmath>

using namespace std;

int suma (int liczba) {

{
int wynik=0;
do
{
wynik=wynik+liczba%10;
liczba=liczba/10;
}
while(liczba!=0);
return wynik;
}
}

int main() {
    int l;
    cout<<"Podaj liczbe"<<endl;
    cin>>l;
    cout<<"Suma liczby cyfr liczby "<<l<<" jest rowna : "<<suma(l);

}

