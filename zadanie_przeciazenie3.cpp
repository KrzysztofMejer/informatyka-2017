#include <iostream>

using namespace std;
// przeladowania funkcji ze wzgledu na typ parametrow

int obliczSume (int a) {
    return a;
}

int obliczSume (int a, int b) {
    return a + b;
}

int obliczSume (int a, int b, int c) {
    return a + b + c;
}

void wypisz (int a){
    cout<<"Liczba calkowita : "<<a<<endl;
}

void wypisz (double a) {
    cout<<"Liczba rzeczywista : "<<a<<endl;
}

void wypisz (char a) {
    cout<<"Znak : "<<a<<endl;
}

double oblicz (int a, double b) {
    return a + b;
}



int main()
{
    int x = 2;
    int y = 5;
    int z = 10;
    double k = 5.6;
    double j = 2.5;
    char znak = 'J';

    cout<<obliczSume(x)<<endl;
    cout<<obliczSume(z,x)<<endl;
    cout<<obliczSume(z,z,x)<<endl;

    wypisz(x);
    wypisz(k);
    wypisz(z);
    wypisz(znak);

    cout<<oblicz(x,k)<<endl;
    cout<<oblicz(x,y)<<endl;
    cout<<oblicz(k,j)<<endl;


    return 0;

}
