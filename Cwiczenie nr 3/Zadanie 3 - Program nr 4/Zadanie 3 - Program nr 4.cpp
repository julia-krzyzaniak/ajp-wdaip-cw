#include <iostream>

using namespace std;

int main()
{
	int a, b, suma = 0;

	cout << "Podaj liczbe poczatkowa: ";
	cin >> a;
	cout << "Podaj liczbe koncowa: ";
	cin >> b;

	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 1) 
			suma = suma + i;
	}

	cout << "Suma liczb nieparzystych to: " << suma;
}

