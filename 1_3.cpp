#include <iostream>

using namespace std;

int main()
{
   int n,s;
    cout<<"Podaj wartosc n"<<endl;
    cin>>n;
    if (n>=1) {
        s=n*(n+1)/2;
        cout<<"s wynosi: "<<s<<endl;
    }else{
    cout<<"n<1"<<endl;
    }
    return 0;
        }

