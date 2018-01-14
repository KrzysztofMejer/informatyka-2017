#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    srand(time(NULL));
    a=10+rand()%(50-10+1);
    cout<<a<<endl;
    if (a>=0 && a%2==1){
    cout<<"Nieparzysta liczba calkowita dodatnia"<<endl;
    } else {
    cout<<"To nie jest nieparzysta liczba calkowita dodatnia"<<endl;
    }

    return 0;
}

