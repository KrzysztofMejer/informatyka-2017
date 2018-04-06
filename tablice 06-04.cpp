#include <iostream>
#include <iomanip>

using namespace std;

void filling (int T[], int ile) { // wype³nianie tablicy
    for (int i=0; i<ile; i++) {
        cout<<"Podaj "<<i+1<<" element tablicy";
        cin>>T[i];
    }
}
void screenout (int T[], int ile) { // wypisywanie elemtów tablicy v1
    for (int i=0; i<ile; i++) {
            cout<<T[i]<<" ";
    }
}

void load(int T[], int n) { // wypisywanie elementow tablicy v2
    for (int i=0; i<n; i++) {
            cout<<"T["<<i<<"] = ";
            cin>>T[i];
    }
}

void wypisz(int T[],int n) {
    cout<<"Elementy w tablicy:"<<endl;
    for (int i=0; i<n; i++) {
        cout<<setw(6)<<T[i]; // Ogranicza liczbe znaków wyœwietlanych
    }
}

void screenreverse (int T[], int n) { // wyœwietlanie elementów tablicy w odwrotnej kolejnoœci

    for (int i=n-1; i>=0; i--) {
            cout<<T[i];
            cout<<endl;
    }
}

void suma (int T[], int n) {  // sumowanie elementow tablicy
    int wartosc = 0;
    for (int i=0; i<n; i++) {
   wartosc += T [i];
    }
    cout<<"Suma elementow tablicy wynosi = "<<wartosc<<endl;

}

void iloczyn (int T[], int n) {
    int iloczyn = 1;
    for (int i = 0; i<n; i++) {
        if (T[i]>=5) {
            iloczyn *= T[i];
        }
        if (iloczyn<5) {  // zabespieczenie przed b³edn¹ wartoœci¹ iloczynu
            iloczyn=0;

        }
    }
    cout<<"Iloczyn liczb wiekszych od 5 w tablicy wynosi = "<<iloczyn<<endl;
}



int main()
{
    int tablica[10];
    load(tablica,10);
    cout<<endl;
    screenout(tablica,10);
    cout<<endl;
    cout<<endl;
    wypisz(tablica,10);
    cout<<endl;
    cout<<endl;
    screenreverse(tablica,10);
    cout<<endl;
    suma(tablica,10);
    iloczyn(tablica,10);



    return 0;
}
