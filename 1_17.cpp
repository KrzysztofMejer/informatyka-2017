
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int x,y,p,q;
    p=-5;
    q=10;
    srand(time(NULL));
    x = p + rand()%(p-q+1);

    if (x<7) {
        y=pow(x,3)+1;
    } else {
    switch (x) {
        case 7:
            y=cos(x-1);
            break;
        case 9:
            y=sqrt(3*x);
            break;
        default:
            y = -8 * x;
    }
    }
    cout<<"Y wynosi: "<<y<<endl;
    return 0;
    }

// funkcja losujaca liczby str.225 w pozdr
// zad.dom - zad 1_18 + specyfikacja i schemat blokowy w zeszcyie do zadan 1_14,1_15,1_16,1_17
// za tydzieñ kartkówka z kodu

