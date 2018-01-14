#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int l1,l2,pk,pp,pt;
    char usr;
    srand(time(NULL));
    l1=10+rand()%(50-10+1);
    l2=10+rand()%(50-10+1);
    cout<<"Podaj znak"<<endl;
    cin>>usr;

    switch (usr) {

    case 'p' :
    pk=l1*l1;
    pp=l1*l2;
    cout<<"Pole kwadratu wynosi : <"<<pk<<">"<<endl;
    cout<<"Pole prostokata wynosi : <"<<pp<<">"<<endl;
    break;

    case 't' :
    pt=(0,5*l1)*l2;
    cout<<"Pole trojkata wynosi : <"<<pt<<">"<<endl;
    break;

    default :
    cout<<"Nie podales poprawnego operatora"<<endl;
    break;
}
    return 0;
}

