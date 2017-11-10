#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    cout<<"Podaj liczbe n"<<endl;
    cin>>n;
    int s=1,i=3;
    while (i<=n+2) {
        s=s*i;
        i=i+1;
    }
    cout<<"S = "<<s<<endl;
    return 0;

    }






