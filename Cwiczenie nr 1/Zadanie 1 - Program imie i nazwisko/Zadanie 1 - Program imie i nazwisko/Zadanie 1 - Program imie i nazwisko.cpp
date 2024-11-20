#pragma warning(disable : 4996)

#include <iostream>
#include <climits>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    string imie;              
    string nazwisko;          
    string nota_osoby;       
    cout << "Podaj imie: ";   
    cin >> imie;              

    cout << "Podaj nazwisko: ";  
    cin >> nazwisko;          
  
    nota_osoby = imie + " " + nazwisko;     

    cout << "Witaj " << nota_osoby << " " << endl;  

    nota_osoby += " czyta ten opis";   
    cout << nota_osoby << endl;

    getch();

}