#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
    int ip1,ip2,ip3,ip4;
    string bin="",bin1,bin2,bin3,bin4;
    cout<<"Adres IP podzielony zostal na cztery czesci"<<endl;
    cout<<"Podaj pierwsza czesc adresu"<<endl;
    cin>>ip1;
    cout<<"Podaj druga czesc adresu"<<endl;
    cin>>ip2;
    cout<<"Podaj trzecia czesc adresu"<<endl;
    cin>>ip3;
    cout<<"Podaj czwarta czesc adresu"<<endl;
    cin>>ip4;

   cout<<"Podany przez Ciebie adres IP to: "<<ip1<<"."<<ip2<<"."<<ip3<<"."<<ip4<<endl<<endl;

   bin="";
    while(ip1!=0)
    {
    if (ip1%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip1=ip1/2;
    bin1=bin;
    };
    bin="";
{
 while(ip2!=0)
    {
    if (ip2%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip2=ip2/2;
    bin2=bin;
    };
    bin="";
    {


     while(ip3!=0)
    {
    if (ip3%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;}
        ip3=ip3/2;
    bin3=bin;
    }
    }

    bin="";{
     while(ip4!=0)
    {
    if (ip4%2==0){
        bin="0"+bin;
    }
    else
    {
        bin="1"+bin;};
        ip4=ip4/2;
    bin4=bin;
    }};
    bin="";
}

 cout<<"Podany adres IP w przeliczeniu na system binarny wyglada nastepujaco: "<<endl<<setfill('0')<<setw(8)<<bin1<<"."<<setfill('0')<<setw(8)<<bin2<<"."<<setfill('0')<<setw(8)<<bin3<<"."<<setfill('0')<<setw(8)<<bin4<<endl<<endl;
    system("pause");
    }




