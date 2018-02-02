#include <iostream>

using namespace std;

int suma(void){
    int a=4, b=3;
    return a+b;
}
int suma1(void) {
    int a=5, b=13;
    return a+b;
}

int main()
{

    cout<<"Suma dwoch liczb wynosi : "<<suma()<<endl;
    cout<<"Suma dwoch innych liczb wynosi : "<<suma1()<<endl;
    cout<<"Suma dwoch sum wynosi : "<<suma1()+suma()<<endl;
    cout<<"smutnabuzka.jpg"<<endl;
    return 0;
}
