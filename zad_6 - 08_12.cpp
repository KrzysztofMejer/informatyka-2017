#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int d=0;
    cout<<"Podaj liczbe naturalna"<<endl;
    cin>>n;
    for (i=1;i<=n;i++) {
        if (n%i==0) {
            d=d+1;
        }
    }
    cout<<"Liczba ma "<<d<<" dzielniki/dzielnikow"<<endl;
    if (d==2) {
        cout<<"Podana liczba jest liczba pierwsza"<<endl;
    }
    if (d!=2) {
        cout<<"Podana liczba nie jest liczba pierwsza"<<endl;
    }
    return 0;

}
