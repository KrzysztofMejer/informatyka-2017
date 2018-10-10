#include <iostream>
#include <cmath>

using namespace std;

int wieksza (int a,int b) {

    if (a>b)
            return a;
    else
        return b;
}

int main() {

    int a;
    int b;
   cout<<"Podaj dwie liczby"<<endl;
   cin>>a;
   cin>>b;
   cout<<"Liczba "<<wieksza(a,b)<<" jest najwieksza z podanych"<<endl;
   return 0;

}

