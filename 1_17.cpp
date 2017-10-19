#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    double x,y;
    srand( time( NULL ) );
    x= rand() % 12 + -5;

    if (x<7) {
        y=pow(x,3)+1;
    } else if (x==7) {
    y=cos(x-1);
    } else if (x==9) {
    y=sqrt(3*x);
    } else {
    y=-8*x;
    }
    cout<<"Y wynosi: "<<y<<endl;
    return 0;
}
