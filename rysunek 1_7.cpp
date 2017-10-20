#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double a,b,c,delta,x,pom,x1,x2;
   cout<<"Podaj a,b,c"<<endl;
   cin>>a>>b>>c;
   if (a==0) {
    cout<<"To nie jest rownanie kwadratowe"<<endl;
   }else {
   delta=b*b-4*(a*c);
   if (delta<0) {
    cout<<"Rowanie nie ma pierwiastkow"<<endl;
   } else if (delta==0) {
   x=-b/(2*a);
   cout<<"X wynosi: "<<endl;
   } else {
   pom=c/a;
   if (b>0) {
    x1=(-b-sqrt(delta))/(2*a);
    x2=pom/x1;
    cout<<"X1 wynosi: "<<x1<<endl;
    cout<<"X2 wynosi: "<<x2<<endl;
   } else {
    x2=(-b-sqrt(delta))/(2*a);
    x1=pom/x2;
    cout<<"X1 wynosi: "<<x1<<endl;
    cout<<"X2 wynosi: "<<x2<<endl;
   }
   }
   }
   return 0;
}

















