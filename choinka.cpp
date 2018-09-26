#include <iostream>

using namespace std;

int main()
{
    int h;

    cout << "Wprowadz wysokosc choinki: ";
    cin >> h;
    cout << endl;

    for (int i = 1; i <= h-1; i++) {
    for (int x = 1 ; x <= h-i-1 ; x++) {
    cout << " ";
    }
    for (int y = 1; y <= 2*i-1 ; y++) {
    cout << "*";
    }
    cout << endl;
    }

    for (int pien = 1; pien <= h-2; pien++){
    cout << " ";
    }
    cout << "#";
}

