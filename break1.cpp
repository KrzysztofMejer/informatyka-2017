#include <iostream>
using namespace std;

int main()
{
    int a,b;

    for (b=1;b<=5;b++) {
        cout<<"Podaj liczbe"<<endl;
        cin>>a;
        if (a%2!=0) {
            break;
        }

    }
    return 0;
   }

//U�ytkownik mo�� poda� dowoln� liczb� parzyst� 5 razy, je�eli poda liczb� nieparzyst� program przerywa swoje dzia�anie
