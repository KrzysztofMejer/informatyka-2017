#include <iostream>

using namespace std;

int main()
{
    string haslo="zsk";
    string userhaslo;
    int x,i;

    for (i=1;i<=3;i++) {
        cout<<"Podaj haslo"<<endl;
        cin>>userhaslo;
        if (userhaslo==haslo) {
            cout<<"Gratuluje odgadles haslo za "<<i<<" "<<"proba"<<endl;
            break;
        }
        if (i==3 && userhaslo!=haslo) {
            cout<<"NIE ODGADLES HASLA"<<endl;
            break;
        }
    }

return 0;
}
