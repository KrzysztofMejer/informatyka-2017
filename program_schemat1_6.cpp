#include <iostream>
#include <math.h>
using namespace std;
int main() {
  double a,b,c,delta,x0,x1,x2;
  cout<<”Podaj a”<<endl;
  cin>>a;
  cout<<”Podaj b”<<endl;
  cin>>b;
  cout<<”Podaj c”<<endl;
  cin>>c;
  if (a==0) {
    cout<<”To nie jest rownanie
    kwadratowe”<<endl;
    } else {
      delta=b*b-4*a*c;
      } else if (delta<0) {
        cout<<”Rownanie nie ma pierwiastkow”<<endl;
        } else if (delta==0) {
          x0=b/(2*a)
          cout<<”x0 wynosi: ”<<x0<<endl;
          } else {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout<<”x1 wynosi: ”<<x1<<endl;
            cout<<”x2 wynosi: ”<<x2<<endl;
            }
 
  }
  return 0;
}