#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int suma=0;
    for (i;i<=50;i++) {
        if (i<50) {
            cout<<""<<i<<"+";
            suma=suma+i;
        }
        else {
            cout<<""<<i<<endl;
            suma=suma+i;
        }
    }
    cout<<"Suma : "<<suma;
    return 0;
}
