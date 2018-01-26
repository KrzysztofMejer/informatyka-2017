#include <iostream>

using namespace std;

int ciag1 (int n) {
    if (n==1)
        return -1;
    else
        return ciag1 (n-1)+3;
}

int ciag2 (int n1) {
    if(n1==1)
        return 1;
    else
        return ciag2 (n1-1)+1;
}

int ciag3 (int n2) {
    if (n2==1)
        return 8;
    else
        return ciag3 (n2-1)-1;
}

int main()
{
    char x;
    int y;
    int y1;
    cout<<"Podaj opcje programu : a,b,lub c"<<endl;
    cin>>x;

    switch (x) {
    case 'a' :
        cout<<"Podaj rzadany wyraz ciagu"<<endl;
        cin>>y;
        cout<<y<<"-ty wyraz ciagu wynosi : "<<ciag1(y)<<endl;
        break;
    case 'b' :
        cout<<"Podaj rzadany wyraz ciagu"<<endl;
        cin>>y;
        if (y%2==0){
            y1=y*-1;
            cout<<y<<"-ty wyraz ciagu wynosci : "<<y1<<endl;
            break;
        }
        else
        cout<<y<<"-ty wyraz ciagu wynosci : "<<ciag2(y)<<endl;
        break;
    case 'c' :
        cout<<"Podaj rzadany wyraz ciagu"<<endl;
        cin>>y;
        if (y%2==0) {
        cout<<y<<"-ty wyraz ciagu wynosi : x"<<endl;
        break;
        }
        else
        cout<<y<<"-ty wyraz ciagu wynosci : "<<ciag3(y)<<endl;
        break;
    default :
        cout<<"Podales niepoprawny znak"<<endl;
        break;
    }
}
