#include <iostream>

using namespace std;

int main()
{
    int i=1,n=-6;

    for (i;i<=10;i++) {

        n=n+3;
        if (n!=3 && n!=18 && n!=24 ) {
            cout<<n<<",";
        }
        if (n==24) {
            cout<<n<<" ";
        }
    }
    return 0;
}
