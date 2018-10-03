#include <iostream>
using namespace std;

int nwd (int a, int b)
{

// if (b==0) return a;
// return nwd (b,a%b)

    cout<<"NWD("<<a<<", "<<b<<")"<<endl;
    if (b==0) return a;
    int x=nwd(b,a%b);
    cout<<"="<<x<<endl;
    return x;
}
int main () {

    cout<<nwd(70,28)<<endl;
    return 0;

}
