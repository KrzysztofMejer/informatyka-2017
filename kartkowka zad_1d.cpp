#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int liczba1,liczba2,liczba3,najwieksza;
    liczba1=rand()%1000+1;
    liczba2=rand()%1000+1;
    liczba3=rand()%1000+1;
    cout <<"3 wylosowane liczby : "<<liczba1<<","<<liczba2<<","<<liczba3<<endl;
    najwieksza=liczba1;
    if (liczba2>najwieksza) {
        najwieksza=liczba2;
    }
    if (liczba3>najwieksza) {
        najwieksza=liczba3;
    }

        cout<<"Najwieksza liczba : "<<najwieksza<<endl;


    return 0;

}
