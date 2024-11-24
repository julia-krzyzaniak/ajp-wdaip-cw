#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b;
	 char odpowiedz;

	cout << "Program algorytm Euklidesa: " << endl;

	do {
		// znak = getch();
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;

		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}

			cout << "Najwiekszy wspolny dzielnik: " << a << endl;
			
			cout << endl << "Czy chcesz kontynuowac? Wcisnij t: ";
			cin >> odpowiedz;
		}

	} while (odpowiedz == 't');

	
}


//if (znak )
//{
//	esc = getch();
//	if (esc == 27) break;
//}
//do {





	//} while (znak != 27);

//for (int i = 1; i <= a; i++) {
//	if (a % i == 0)
//	{
//		cout << "Dzielniki liczby " << a << " to: " << i << endl;
//	}



