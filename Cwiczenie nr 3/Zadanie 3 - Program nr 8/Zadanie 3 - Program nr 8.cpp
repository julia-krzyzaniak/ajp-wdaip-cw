#include <iostream>

using namespace std;

int main()
{
	int  a = 0, b = 0;

	//cout << "Podaj pierwsza liczbe: ";
	//cin >> a;

	//cout << "Podaj druga liczbe: ";
	//cin >> b;

	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;

	}
}