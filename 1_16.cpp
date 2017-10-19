#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double x,y;
   cout<<"Podaj x"<<endl;
   cin>>x;
   if (x<1) {
    y=2*x;
   }
   else if (x==1) {
    y=-10;
   }
   else if (x==3) {
    y=pow(x-1,4);
   }
   else if (x==6) {
    y=sqrt((x-4));
   } else {
   y=0;
   }
   cout<<"Y wynosi: "<<y<<endl;
   return 0;
}
