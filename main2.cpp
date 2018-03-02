#include <iostream>

using namespace std;

// zmienna globalna
int a=5;

int oblicz(void) {
    int b = 3;  // zmienna lokalna
    return a+b;
}

int wyswietl (int a) {
    return  a;
}



int main()
{
    int c = 3; // zmienna lokalna
    c = oblicz();
    cout<<c;
    cout<<a;



    return 0;
}
