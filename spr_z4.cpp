#include <iostream>


using namespace std;

int main()
{
    int a,b,i=1;
    double s;
    cout<<"Podaj wiek uzytkownikow"<<endl;
    cin>>a;
    cin>>b;
    do  {
        i++;
        if (a>=18 && b>=18) {
                s=(a+b)/2;
            cout<<"Sredni wiek wynosi : <"<<s<<">"<<endl;
            break;
        }
    if (a>=18 && b<18) {
        cout<<"Podaj poprawny wiek 2 uzytkownika"<<endl;
        cin>>b;
    }
    if (a<18 && b>=18) {
        cout<<"Podaj poprawny wiek 1 uzytkownika"<<endl;
        cin>>a;
    }
    if (a<18 && b<18) {
        cout<<"Podaj poprawny wiek uzytkownikow"<<endl;
        cin>>a;
        cin>>b;
    }
    if (i==3 && a<18 || i==3 && b<18) {
            cout<<"3 bledne proby!"<<endl;
    }
    }
    while (i<=3);
    return 0;
}
