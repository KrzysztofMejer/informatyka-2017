#include <iostream>

using namespace std;

//działanie funkcji na wskaźnikach
// powoduje to bezpośrednie działąnie na pamięci -> wartosc zmiennej pozostaje zawsze taka sama jak wynik działania funkcji
//(ponieważ odnosimy się BEZPOŚREDNIO do pamięci)

void f (int*n) {
    *n = *n * 10;
    cout<<"Wartosc zmiennej n wewnatrz funkcji : "<<*n<<endl;
}

void f1 (int x) {
    x = x * 10;
    cout<<"Wartosc zmiennej x wewnatrz funckji wynosi : "<<x<<endl;
}


int main()
{
    int a = 5;
    int x = 5;
    f(&a);
    cout<<"Wartosc zmiennej a na zaewnatrz funckji wynosi : "<<a<<endl;
    f1(x);
    cout<<"Wartosc zmiennej x na zewnatrz funckji wynosi : "<<x<<endl;
    return 0;
}
