#include <iostream>

using namespace std;

int main()
{
    int i,x,n;
    cout<<"Podaj wartosc koncowa ciagu"<<endl;
    cin>>x;
     for (n=4;n<=x;n=n+3) {

        if (n!=x && n!=(x-2) && n!=(x-1) && n!=x) {
        cout<<n<<",";

        }

        if(n==(x-2) || n==(x-1) || n==x) {
            cout<<n<<".";

        }
     }



      return 0;
    }

