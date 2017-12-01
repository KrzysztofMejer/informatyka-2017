
#include <iostream>

#include <cstdlib>

#include <math.h>

#include <sstream>


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

    cout<<"123 : "<<decimal<<endl;

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

void sevdec () // 7->10
// seven - liczba w systemie siodemkowym
{
   int seven;
   int decimal= 0, i = 0, reszta;
   cout << "Podaj liczbe w systemie siodemkowym"<<endl;
   cin >> seven;

    while (seven != 0)
    {
        reszta = seven % 10;
        seven = seven / 10;
        decimal = decimal + reszta* pow(7, i);
        ++i;
    }
    cout <<"W systemie decymalnym podana liczba wynosi: "<<decimal<<endl;

    }



void sevbin () // 7->2
{
   int seven;
   int decimal= 0, i = 0, reszta;
   string wk;
   cout << "Podaj liczbe w systemie siodemkowym"<<endl;
   cin >> seven;

    while (seven != 0)
    {
        reszta = seven % 10;
        seven = seven / 10;
        decimal = decimal + reszta* pow(7, i);
        ++i;
    }

    while(decimal!=0)

        {
            if (decimal%2==1) wk="1"+wk;

            if (decimal%2==0) wk="0"+wk;

            decimal = decimal/2;
        }

        cout<<"W systemie binarnym podana liczba wynosi: "<<wk<<"\n";
}

void sevhex () // 7->16
{
   int seven;
   int decimal= 0, i = 0, reszta;
   cout << "Podaj liczbe w systemie siodemkowym"<<endl;
   cin >> seven;

    while (seven != 0)
    {
        reszta = seven % 10;
        seven = seven / 10;
        decimal = decimal + reszta* pow(7, i);
        ++i;
    }
     cout<<"W systemie heksadecymalnym podana liczba wynosi: "<<hex<<decimal<<"\n";
}

void decsev () // 10->7
{

}


void binsev () // 2->7
{

}

void hexsev () // 16->7
{

}


int main()

{


string wk;

char menu;


    cout<<"Wybierz operacje:\n a 10->2\n b 2->10\n c 16->10\n d 10->16 \n e 16->2 \n f 2->16 \n g 10->8 \n h 2->8 \n i 16->8 \n j 8->10 \n k 8->2 \n l 8->16 \n m 7->10 \n n 7->2 \n o 7->16 \n p 10->7 \n r 2->7 \n s 16->7 \n ";


    cout<<endl<<"Wybrana opcja: ";

    cin>>menu;


switch (menu)

    {

case 'a':

     {

     decbin();

     break;

     }


     case 'b':

     {

     bindec();

     break;

     }

     case 'c':

     {

     hexdec();

     break;

     }
     case 'd':

     {

     dechex();

     break;

     }
     case 'e':

     {

     hexbin();

     break;

     }
     case 'f':

     {

     binhex();

     break;

     }
     case 'g':

     {

     decoct();

     break;

     }
     case 'h':

     {

     binoct();

     break;

     }
     case 'i':

     {

     hexoct();

     break;

     }
     case 'j':

     {

     octdec();

     break;

     }
     case 'k':

     {

     octbin();

     break;

     }
     case 'l':

     {

     octhex();

     break;

     }
     case 'm':

     {

     sevdec();

     break;

     }
     case 'n':

     {

     sevbin();

     break;

     }
     case 'o':

     {

     sevhex();

     break;

     }
     case 'p':

     {

     decsev ();

     break;

     }
     case 'r':

     {

     decbin ();

     break;

     }
     case 's':

     {

     dechex();

     break;

     }


     default: cout<<"N\n";




break;

    }


system("pause");

}
