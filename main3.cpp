#include <iostream>

using namespace std;

//dzia³¹nie funkcji na wskaŸnikach
// powoduje to bezpoœrednie dzia³¹nie na pamiêci -> wartosc zmiennej pozostaje zawsze taka sama jak wynik dzia³ania funkcji
//(poniewa¿ odnosimy siê BEZPOŒREDNIO do pamiêci)

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
