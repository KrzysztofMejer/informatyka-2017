#include <iostream>

using namespace std;

void f1 (void) {
    cout<<"Pierwsza funkcja"<<endl;
}

void f2 (int a, int b) {
    cout<<endl<<"Druga funkcja"<<endl;
    cout<<"Suma a i b wynosi : "<<a+b<<endl;

}

 int f3 (int a, int b) {
     return a+b;
 }

 int zwieksz(int liczba){
     liczba = liczba * 2;
     return liczba;
 }



int main()
{
    f1();
    f2(2,4);
    cout<<"Suma funkcji trzeciej wynosi : "<<f3(3,4)<<endl;

    if((f3(5,7))% 2 == 0){
        cout<<"Suma funkcji trzeciej jest parzysta"<<endl;
    } else {
        cout<<"Suma funkcji trzeciej nie jest parzysta"<<endl;
    }

    int dlugosc = 5;
    dlugosc = zwieksz(dlugosc);
    cout<<dlugosc;



    return 0;
}
