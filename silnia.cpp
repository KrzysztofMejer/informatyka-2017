#include <iostream>

using namespace std;

int silnia (int n) {
    int s=1;
    if (n==0) return 1;
    for (int i=2;i<=n;i++)
        s*=i;
    return s;
}

/*  int rekurencyjna (int n){
    if (n==0) return 1;

    return rekurencyjna(n-1)*n;

} */

int main()
{
   int x;
   cin>>x;
   cout<<x<<"!="<<silnia(x)<<endl;

   /*
   cin>>x;
   cout<<x<<"!="<<rekurencyjna(x)<<endl;
   */

   return 0;
}

