#include <iostream>

using namespace std;

void wypisz (int t[], int n) {
for (int i=0;i<n;i++) cout<<t[i]<<"\t";
cout<<endl<<endl;
}
int main()
{
    int t[9]={1,4,2,3,4,1,6,7,1};

    int n=9;
    int p[8]={0};
    int m=8;
    wypisz (t,n);
    wypisz (p,m);

    for (int i=0;i<n;i++) p[t[i]]++;
    cout<<"Po wypelnieniu tablicy pomocniczej"<<endl;
    wypisz (t,n);

    cout<<"Posortowane"<<endl;
    int k=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<p[i];j++)
        {
            t[k]=i;
            k++;
        }
    wypisz (t,n);
    wypisz (p,n);

    return 0;
}
