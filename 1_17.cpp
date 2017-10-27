#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    double x,y;
    srand(time(NULL));
    x = -5 + rand()%(10--5+1);

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
