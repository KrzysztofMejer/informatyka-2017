#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
  int n,i=0;
  double j=1.5;
  cout<<"Podaj dlugosc ciagu"<<endl;
  cin>>n;

  for (i;i<n;i++){
    j=j*2;
    if (i<n-1) {
        cout<<j<<",";
    }
    else {
         cout<<j;
    }
    }
    return 0;
  }










