#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,najmniejsza;
    cout<<"Wprowadz a,b,c,d: "<<endl;
    cin>>a>>b>>c>>d;
    najmniejsza=a;
    if (b<najmniejsza) {
        najmniejsza=b;
    }

    if (c<najmniejsza) {
        najmniejsza=c;
    }
    if (d<najmniejsza) {
        najmniejsza=d;
    }
    cout<<"najmniejsza liczba to: "<<najmniejsza<<endl;
    return 0;
}

//zad 1_8 - zad.dom + specyfikacja + blokowy//
