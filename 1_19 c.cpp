#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
  int i=0,n=16;
  for (i;i<7;i++) {
    n=n-4;
    if (n>=-11) {
        cout<<n<<",";
    }
    else {
        cout<<n;
    }
  }
  return 0;
    }







