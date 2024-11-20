#define _USE_MATH_DEFINES

#include <iostream>
#include <climits>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float a, b, r;
	float cal = 2.54;
	float mila = 185200;
	int f;

	cout << "Wybierz figure, ktorej chcesz obliczyc pole i obwod \n 1. Kwadrat \n 2. Prostokat \n 3. Kolo \n";
	cout << "Wybierz figure: ";
	cin >> f;

	if (f == 1) {
		cout << "Podaj liczbe: ";
		cin >> a;
		cout << "Pole kwadratu w centymetrach [cm^2]: " << pow(a, 2) << endl;
		cout << "Obwod kwadratu w centymetrach [cm]: " << a * 4 << endl;
		cout << endl;
		cout << "Pole kwadratu w calach [in^2]: " << pow(a, 2) / cal << endl;
		cout << "Obwod kwadratu w calach [in]: " << a * 4 / cal << endl;
		cout << endl;
		cout << "Pole kwadratu w milach [mi^2]: " << pow(a, 2) / mila << endl;
		cout << "Obwod kwadratu w milach: " << a * 4 / mila << endl;
	}

	else if (f == 2)
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		cout << "Pole prostokata w centymetrach [cm^2]: " << a * b << endl;
		cout << "Obwod prostokata w centymetrach [cm]: " << 2 * a + 2 * b << endl;
		cout << endl;
		cout << "Pole prostokata w calach [in^2]: " << a * b / cal << endl;
		cout << "Obwod prostokata w calach [in]: " << 2 * a + 2 * b / cal << endl;
		cout << endl;
		cout << "Pole prostokata w milach [mi^2]: " << a * b / mila << endl;
		cout << "Obwod prostokata w calach [mi]: " << 2 * a + 2 * b / mila << endl;
	}

	else if (f == 3)
	{
		cout << "Podaj promien: ";
		cin >> r;
		cout << "Pole kola w centymetrach [cm^2]: " << M_PI * pow(r, 2) << endl;
		cout << "Obwod kola w centymetrach [cm]: " << 2 * M_PI * r << endl;
		cout << endl;
		cout << "Pole kola w calach [in^2]: " << M_PI * pow(r, 2) / cal << endl;
		cout << "Obwod kola w calach [in]: " << 2 * M_PI * r / cal << endl;
		cout << endl;
		cout << "Pole kola w milach [mi^2]: " << M_PI * pow(r, 2) / mila << endl;
		cout << "Obwod kola w milach [mi]: " << 2 * M_PI * r / mila << endl;
	}

	 else {
		cout << "Blad" << endl;
	}

}