#include <iostream>
using namespace std;

double ciag (int n) {

    if (n==1)
        return 0.5;
        if (n==2)
            return 1;
        return 3*ciag(n-2)+ ciag(n-1);

}
int main () {

    int x;

    cout<<"Podaj wyraz ciagu"<<endl;
    cin>>x;
    cout<<""<<x<<" wyraz ciagu wynosi : "<<ciag(x)<<endl;


    for (int i=1;i<=x;i++)
        cout<<endl<<"ciag("<<i<<")="<<ciag(i)<<endl;
    return 0;

}
