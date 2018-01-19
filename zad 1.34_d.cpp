#include <iostream>
using namespace std;

double ciag (double n) {

    if (n==1)
        return -10;
    else
        return ciag (n-1)*(-0.5);

}
int main () {

    int x;

    cout<<"Podaj wyraz ciagu"<<endl;
    cin>>x;
    cout<<""<<x<<" wyraz ciagu wynosi : "<<ciag(x);

}
