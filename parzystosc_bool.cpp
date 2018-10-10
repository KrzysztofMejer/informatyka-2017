#include <iostream>
#include <cmath>

using namespace std;

bool parzystosc (int n) {

    if (n%2==0)
            return true;
    else
        return false;
}

int main() {

    int n;
   cout<<"Podaj liczbe"<<endl;
   cin>>n;
   parzystosc(n);
   if (parzystosc(n)==true)
    cout<<"Liczba "<<n<<" jest parzysta"<<endl;
   else
    cout<<"Liczba "<<n<<" jest nieparzysta"<<endl;
    return 0;
}

