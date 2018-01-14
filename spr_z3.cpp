#include <iostream>


using namespace std;

int main()
{
    int i=-4;
    for (i;i<=16;i=i+2) {
        if (i==-4 || i==-2 || i==2 || i==8 || i==4 || i==12 || i==10 ) {
        cout<<i<<", ";
    } else if (i==16) {
        cout<<i<<".";
    }
    }
    return 0;
}
