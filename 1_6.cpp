#include <iostream>

using namespace std;

int main()
{
  int liczba;
  cout<<"Podaj dowlona liczbe calkowita"<<endl;
  if (liczba%2==0) {
    cout<<"Liczba jest parzysta";
    cin>>liczba;
  }else {
  cout<<"Liczba jest nieparzysta";
  }
  return 0;
}
