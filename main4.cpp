#include <iostream>

using namespace std;

// przekazywanie parametrów przez referencje
// działa podobnie jak wskaźnik ale jest wygodniejsze bo nie trzeba robić * wszędzie

void f (int &n) {
    n = n * 2;
    cout<<"Wartosc wewnatrz funkcji wynosi : "<<n<<endl;
}


int main()
{
    int a = 5;
    f(a);
    cout<<"Wartosc na zewnatrz funkcji wynosi : "<<a<<endl;

    return 0;
}
