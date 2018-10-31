#include <iostream>
using namespace std;

int odwracanie () {
    int n, odw=0, reszta;
    cout<<"Podaj liczbe : ";
    cin>>n;

     while(n!=0)
  {
     reszta=n%10;
     odw=odw*10+reszta;
     n/=10;
  }

  cout<<"Odwrocona liczba wynosi: "<<odw<<endl;

}

int main()
{
    odwracanie();
  return 0;
}
