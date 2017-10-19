#include <iostream>

using namespace std;

int main()
{
  int a,b,c,najwieksza;
  cout<<"Podaj pierwsza liczbe"<<endl;
  cin>>a;
  cout<<"Podaj druga liczbe"<<endl;
  cin>>b;
  cout<<"Podaj trzecia liczbe"<<endl;
  cin>>c;
  najwieksza=a;
  if (b>najwieksza) {
        najwieksza=b;
  }
  if (c>najwieksza) {
    najwieksza=c;
  }
  cout<<"Najwieksza liczba to: "<<najwieksza<<endl;
  return 0;
}
