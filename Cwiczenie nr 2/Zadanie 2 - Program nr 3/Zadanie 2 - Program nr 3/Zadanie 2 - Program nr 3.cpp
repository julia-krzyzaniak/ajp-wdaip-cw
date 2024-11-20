#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int min = 1, max = 10;

    int a = 0;

    srand(time(0));
    int los = rand() % max + min;

    losowanie:

    cout << "Podaj liczbe od 1 do 10: ";
    cin >> a;

    if (cin.fail()) { 
        cout << "To nie jest liczba :(" << endl;
        cout << "Podaj liczbe od 1 do 10:" << endl;
        cin.clear(); 
        cin.ignore(256, '\n'); 
        cin >> a; 
    }

    if (a == los) {
        cout << "Gratulacje, zgadles liczbe! :D";
    }

    else {
        cout << "Niestety, ale nie odgadles liczby :(" << endl;

        goto losowanie;
    }
}
