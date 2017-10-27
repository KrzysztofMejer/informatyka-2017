#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    double x,y;
    p=-5;
    q=10;
    srand(time(NULL));
    x = 1 + rand()%(p-q+1);

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
