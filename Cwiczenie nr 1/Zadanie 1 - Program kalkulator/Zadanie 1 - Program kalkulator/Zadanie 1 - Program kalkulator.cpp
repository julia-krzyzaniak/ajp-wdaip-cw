#include <iostream>
#include <climits>
using namespace std;

int main()
{
    float x, y;     
    int z;          
    cout << "Wybierz dzialanie: \n 1 - dodawanie \n 2 - odejmowanie \n 3 - mnozenie \n 4 - dzielenie \n";       
    cin >> z;       
    cout << "Podaj pierwsza liczbe: ";
    cin >> x;       
    cout << "Podaj druga liczbe: ";
    cin >> y;       

    if (z == 1)
    {
        cout << "Wynik dodawania: " << x + y << "\n";
    }

    if (z == 2)
    {
        cout << "Wynik odejmowania: " << x - y << "\n";
    }

    if (z == 3)
    {
        cout << "Wynik mnozenia: " << x * y << "\n";
    }

    if (z == 4)
    {
        cout << "Wynik dzielenia: " << x / y << "\n";
    }

    if (z > 4) {
        cout << "Zla opcja";
    }

    if (z < 0) {
        cout << "Zla opcja";
    }





}