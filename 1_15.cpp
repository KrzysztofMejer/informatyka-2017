#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int x,y,z;
   cout<<"Podaj x,y,z"<<endl;
   cin>>x>>y>>z;
  if (x%2==0 && y%2==0 && z%2==0) {
    cout<<"NIE"<<endl;
  } else {
  cout<<"TAK"<<endl;
  }
  return 0;
}
