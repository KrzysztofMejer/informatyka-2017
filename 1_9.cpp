#include <iostream>

using namespace std;

int main()
{
    int x=5,y=7,z=5;
    x=x+2;
    if (x<y) {
        x=x*z;
        y=y-1;
    }else if (x==y) {
        y=y-z;
        x=x-1;
    }else {
        y=y+z;
        x=x+1;
    }
    cout<<"X wynosi: "<<x<<endl;
    cout<<"Y wynosi: "<<y<<endl;
    return 0;
}
