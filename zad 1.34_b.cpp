#include <iostream>
using namespace std;

int ciag (int n) {

    if (n==1)
        return 2;
    else
        return ciag (n-1)*2;

}
int main () {

    int x;

    cout<<"Podaj wyraz ciagu"<<endl;
    cin>>x;
    cout<<""<<x<<" wyraz ciagu wynosi : "<<ciag(x)<<endl;

/* wypisywanie wszytkiego
    for (int i=1;i<=x;i++)
        cout<<"ciag("<<i<<")="<<ciag(i)<<endl;
    return 0;
    */
}
