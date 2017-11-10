#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    double s=0, a=0;
    do {
        s=s+a;
        cout<<"Podaj a"<<endl;
        cin>>a;
    }
    while (a<=50);
    cout<<"Suma wynosi: "<<s<<endl;
    return 0;

    }








