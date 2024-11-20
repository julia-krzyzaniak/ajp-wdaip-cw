#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Podaj trzecia liczbe: ";
	cin >> c;

	if (a > b && a > c)
	{
		cout << "Najwieksza liczba jest: " << a << endl;
	}

	else if (b > a && b > c)
	{
		cout << "Najwieksza liczba jest: " << b << endl;
	}

	else if (c > a && c > b)
	{
		cout << "Najwieksza liczba jest: " << c << endl;
	}
 
}

