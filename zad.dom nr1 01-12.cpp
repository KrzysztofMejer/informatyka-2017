#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
#include <windows.h>

using namespace std;

void decbin()//10->2
// wk - wynik konwersji

{

    int liczba;

    string wk;

    cout<<"Podaj liczbe w systemie dziesietnym"<<endl;

    cin>>liczba;

        while(liczba!=0)

        {

        if (liczba%2==1) wk="1"+wk;

        if (liczba%2==0) wk="0"+wk;

        liczba=liczba/2;

        }

        cout<<"W systemie binarnym podana liczba wynosi: "<<wk<<"\n";

}


void bindec()//2->10


{
                long binary;
                int decimal=0,i=0;
                cout<<"Podaj liczbe w systemie binarnym"<<endl;
                cin>>binary;
                for (i;binary!=0;i++)
                {
                            decimal=decimal+(binary%10)*pow(2,i);
                            binary=binary/10;
                }
                cout<<"W systemie decymalnym podana liczba wynosi: "<<decimal<<endl;
}

void hexdec()//16->10

{

    int decimal;
    cout<<"Podaj liczbe w systemie heksadecymalnym"<<endl;
    cin>>hex>>decimal;
    cout<<"W systemie decymalnym podana liczba wynosi: "<<decimal<<endl;


}

void dechex()//10->16

{

    int decimal;
    cout<<"Podaj liczbe w systemie dziesietnym"<<endl;
    cin>>decimal;

    cout<<"W systemie heksadecymalnym podana liczba wynosi: "<<hex<<decimal<<"\n";

}

void hexbin()//16->2

// nie chcialem uzywac tablicy, dlatego zastosowalem swego rodzaju obejscie problemu - najpierw do 10, potem z 10 na 2 (spowalnia to dzialanie programu, jednak w tym wypadku nie ma to wiekszego znaczenia)

{

    int decimal;
    string wk;
    cout<<"Podaj liczbe w systemie heksadecymalnym"<<endl;
    cin>>hex>>decimal;

        while(decimal!=0)

        {
            if (decimal%2==1) wk="1"+wk;

            if (decimal%2==0) wk="0"+wk;

            decimal=decimal/2;

        }

        cout<<"W systemie binarnym podana liczba wynosi: "<<wk<<"\n";

}

void binhex()//2->16

// nie chcialem uzywac tablicy, dlatego zastosowalem swego rodzaju obejscie problemu - najpierw do 10, potem z 10 na 16 (spowalnia to dzialanie programu, jednak w tym wypadku nie ma to wiekszego znaczenia)

{
                long binary;
                int decimal=0,i=0;
                cout<<"Podaj liczbe w systemie binarnym"<<endl;
                cin>>binary;
                while(binary!=0)
                {
                                decimal=decimal+(binary%10)*pow(2,i);
                                i++;
                                binary=binary/10;
                }
                cout<<"W systemie heksadecymalnym podana liczba wynosi: "<<hex<<decimal<<"\n";

}

void decoct () //10->8
{
    int decimal;
    cout<<"Podaj liczbe w systemie dziesietnym"<<endl;
    cin>>decimal;

    cout<<"W systemie oktalnym podana liczba wynosi: "<<oct<<decimal<<"\n";

}

void binoct () //2->8
{
    long binary;
                int decimal=0,i=0;
                cout<<"Podaj liczbe w systemie binarnym"<<endl;
                cin>>binary;
                for (i;binary!=0;i++)
                {
                                decimal=decimal+(binary%10)*pow(2,i);

                                binary=binary/10;
                }
    cout<<"W systemie oktalnym podana liczba wynosi: "<<oct<<decimal<<"\n";

}

void hexoct () //16->8
{
     int decimal;
    cout<<"Podaj liczbe w systemie heksadecymalnym"<<endl;
    cin>>hex>>decimal;

     cout<<"W systemie oktalnym podana liczba wynosi: "<<oct<<decimal<<"\n";

}

void octdec () //8->10
{
     int decimal;
    cout<<"Podaj liczbe w systemie oktalnym"<<endl;
    cin>>oct>>decimal;

    cout<<"W systemie decymalnym podana liczba wynosi: "<<decimal<<"\n";

}

void octbin () //8->2
{
    int decimal;
    string konwert;
    cout<<"Podaj liczbe w systemie oktalnym"<<endl;
    cin>>oct>>decimal;

        while(decimal!=0)
        {

        if (decimal%2==1) konwert="1"+konwert;

        if (decimal%2==0) konwert="0"+konwert;

        decimal=decimal/2;
        }

        cout<<"W systemie binarnym podana liczba wynosi: "<<konwert<<"\n";

}

void octhex () //8->16
{
    int decimal;
    cout<<"Podaj liczbe w systemie oktalnym"<<endl;
    cin>>oct>>decimal;
    cout<<"W systemie heksadecymalnym podana liczba wynosi: "<<hex<<decimal<<"\n";

}


int main()

{

string wk;

int menu;

system("color f");

    cout<<"Wybierz operacje:\n 1 dec->bin \n 2 dec->oct \n 3 dec->hex \n 4 bin->oct \n 5 bin->dec \n 6 bin->hex \n 7 oct->bin \n 8 oct->dec \n 9 oct->hex \n 10 hex->bin "<<endl;
    cout<<" 11 hex->oct \n 12 hex->dec \n";


    cout<<endl<<"Wybrana opcja: ";

    cin>>menu;


switch (menu)

    {

case 1:

     {

     decbin();

     break;

     }


     case 2:

     {

     decoct();

     break;

     }

     case 3:

     {

     dechex();

     break;

     }
     case 4:

     {

     binoct();

     break;

     }
     case 5:

     {

     bindec();

     break;

     }
     case 6 :

     {

     binhex();

     break;

     }
     case 7 :

     {

     octbin();

     break;

     }
     case 8 :

     {

     octdec();

     break;

     }
     case 9 :

     {

     octhex();

     break;

     }
     case 10 :

     {

     hexbin();

     break;

     }
     case 11 :

     {

     hexoct();

     break;

     }
     case 12 :

     {

     hexdec();

     break;

     }


     default: cout<<"Wybrales nieprawidlowa opcje"<<endl;



break;

    }


system("pause");

}
