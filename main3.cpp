#include <iostream>

using namespace std;

//dzia��nie funkcji na wska�nikach
// powoduje to bezpo�rednie dzia��nie na pami�ci -> wartosc zmiennej pozostaje zawsze taka sama jak wynik dzia�ania funkcji
//(poniewa� odnosimy si� BEZPO�REDNIO do pami�ci)

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
