#include <iostream>

using namespace std;

int a;

void oblicz1 (void) {
    int a;
    a=10;
    cout<<"W funkcji oblicz1 : "<<a<<endl;
}

void oblicz2 (void) { //Tutaj dzia³¹my na zmiennej globalnej, poniewa¿ nie daliœmy int a - wtedy by³aby lokalna
    a=20;
    cout<<"W funkcji oblicz2 : "<<a<<endl;
}

void oblicz3 (int &z) {
    z=-5;
    cout<<"W funkcji oblicz3 zmienna z wynosi : "<<z<<endl;
}

void oblicz4 (int z) {
    z=-7;
    cout<<"W funkcji oblicz4 zmienna z wynosi : "<<z<<endl;
}
int main()
{
    int a=0;
    cout<<"Zmienna wynosi : "<<a<<endl;
    oblicz1();
    cout<<"Zmienna a : "<<a<<endl;
    oblicz2();
    cout<<"Zmienna a : "<<a<<endl;
    oblicz3(a);
    cout<<"Zmienna a : "<<a<<endl; // zmienna a pokazana jest jako -5 poniewa¿ program odwo³uje siê do miejsca w pamiêci (gdyby ususn¹c referencje zmienna wynosi³aby 0)
    oblicz4(a);
    cout<<"Zmienna a : "<<a<<endl;
    return 0;
}
