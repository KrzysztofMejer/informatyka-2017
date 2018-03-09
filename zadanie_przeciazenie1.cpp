#include <iostream>

using namespace std;
// przeladowania funkcji ze wzgledu na liczbe parametrow

int obliczSume (int a) {
    return a;
}

int obliczSume (int a, int b) {
    return a + b;
}

int obliczSume (int a, int b, int c) {
    return a + b + c;
}

int main()
{
    int x = 2;
    int y = 5;
    int z = 10;
    cout<<obliczSume(x)<<endl;
    cout<<obliczSume(z,x)<<endl;
    cout<<obliczSume(z,z,x)<<endl;


    return 0;

}
