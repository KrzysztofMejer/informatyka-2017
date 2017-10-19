#include <iostream>

using namespace std;

int main()
{
  int liczba;
  cout<<"Podaj dowlona liczbe calkowita"<<endl;
  cin>>liczba;
  if (liczba%2==0) {
    cout<<"Liczba jest parzysta";
  }else {
  cout<<"Liczba jest nieparzysta";
  }
  return 0;
}
