#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
  int i=0,n=-7;
  for (i;i<7;i++) {
    n+=3;
    if (n<14) {
        cout<<n<<",";
    }
    else {
        cout<<n;
    }
  }
  return 0;
    }






