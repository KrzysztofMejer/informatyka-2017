#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int poczatek,koniec;
    int i;
    cout<<"Podaj wartosc poczatkowa"<<endl;
    cin>>poczatek;
    cout<<"Podaj wartosc koncowa"<<endl;
    cin>>koniec;

    for(i=poczatek;i<=koniec;i++) {

        if (poczatek>koniec) {
            cout<<"Podano niepoprawny przedzia³"<<endl;
            break;
        }

        if (i%2==1 && i!=koniec-1) {
                cout<<i<<",";
        }
        if (i==koniec | i==koniec-1 && i%2==1) {
            cout<<i<<"."<<endl;
        }

    }

    }

// tresc :
// u¿ytkownik podaje przedzial liczb z klawiatury (wartosc poczatkowa i koncowa) ktore beda wyswietlane na ekranie. Wyswietlone beda tylko liczby nieparzyste. Po kazdej liczbie bedzie wyswietlony przecinek, a na koncu kropka. Wynik wyswietl w jeddej lini.




