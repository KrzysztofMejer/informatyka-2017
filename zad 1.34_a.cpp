#include <iostream>
using namespace std;

int ciag (int n) {

    if (n==1)
        return 4;
    else
        return ciag (n-1)+3;

}
int main () {

    int x;

    cout<<"Podaj wyraz ciagu"<<endl;
    cin>>x;
    cout<<""<<x<<" wyraz ciagu wynosi : "<<ciag(x);

}
