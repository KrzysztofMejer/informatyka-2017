#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Podaj 3 d³ugosci bokow trojkata"<<endl;
    cin>>a>>b>>c;
    if ((a+b)>c && (a+c)>b && (b+c)>a) {
        cout<<"Mozna utworzyc trojkat"<<endl;
    } else {
    cout<<"Nie mozna utworzyc trojkata"<<endl;
    }
    return 0;
}
