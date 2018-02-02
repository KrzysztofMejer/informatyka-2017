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

//U¿ytkownik mo¿ê podaæ dowoln¹ liczbê parzyst¹ 5 razy, je¿eli poda liczbê nieparzyst¹ program przerywa swoje dzia³anie
