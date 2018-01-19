#include <iostream>
using namespace std;

int ciag (int n) {

    if (n==1)
        return 3;
    if (n%2==0)
         return ciag (n-1)+2;
    else
        return ciag (n-1)-1;

}
int main () {

    int x;

    cout<<"Podaj wyraz ciagu"<<endl;
    cin>>x;
    cout<<""<<x<<" wyraz ciagu wynosi : "<<ciag(x);

}
