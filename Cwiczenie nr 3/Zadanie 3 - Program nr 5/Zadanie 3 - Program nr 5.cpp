#include <iostream>

using namespace std;

int main()
{
	int a, b, wynik;
	char odpowiedz;

	cout << "Program na potegowanie dodatnich liczb: " << endl;

	do {
		cout << endl << "Podaj liczbe: ";
		cin >> a;

		cout << "Podaj potege do ktorej ma byc podniesiona liczba: ";
		cin >> b;

		wynik = pow(a, b);
		cout << "Wynik: " << wynik << endl;

		cout << endl << "Czy chcesz kontynuowac? Wcisnij t lub T: ";
		cin >> odpowiedz;

	}
	while (odpowiedz == 't' || odpowiedz == 'T');

}

