#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Podaj liczbe: ";
	cin >> a;

	if (a % 2 == 0 && a > 0) {
		cout << "Liczba jest parzysta i dodatnia";
	}

	else if (a % 2 == 1 || a < 0) {
		cout << "Liczba jest nieparzysta lub ujemna";
	}

}
