#include <iostream>
#include <cmath>

using namespace std;

int dzielenie (int n) {
    cout<<"Dzielniki "<<n<<" :"<<endl;
    for(int i=1; i<=sqrt(n); i++) {
        if(n % i == 0)
           cout << n / i << endl;
    }
}
int main() {

    int n;
   cout<<"Podaj liczbe"<<endl;
   cin>>n;
   dzielenie(n);
    return 0;
}

