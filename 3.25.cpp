#include <iostream>

using namespace std;


int main()
{
 int tab[5][6];
 int a,b;
 int x;
 int y;

 // a)
 for(a = 0; a < 5; a++){
 for(b = 0; b < 6; b++){
 tab[a][b] = a+b;
 }
 }

 // b)
   for(a = 0; a < 5; a++ ) {
        for(b = 0; b < 6; b++ ) {
            cout << tab[ a ][ b ] << " ";
        }
        cout << endl;
   }

   cout<<endl;

// c)
 for( int a = 0; a < 5; a++ ) {
        int temp = tab[ a ][ 1 ];
        tab[ a ][ 1 ] = tab[ 2 ][ a ];
        tab[ a ][ 2 ] = temp;
    }

       for( int a = 0; a < 5; a++ ) {
        for( int b = 0; b < 6; b++ ) {
            cout << tab[ a ][ b ] << " ";
        }
        cout << endl;
}

//d
cout<<endl;
cout<<"Podaj wiersze ktore pragniesz zamienic miejscami"<<endl;
cin>>x;
cin>>y;

for( int a = 0; a < 6; a++ ) {
        int temp = tab[ x ][ a ];
        tab[ x ][ a ] = tab[ y ][ a ];
        tab[ y ][ a ] = temp;
}

 for( int a = 0; a < 5; a++ ) {
        for( int b = 0; b < 6; b++ ) {
            cout << tab[ a ][ b ] << " ";
        }
        cout << endl;
}

}

