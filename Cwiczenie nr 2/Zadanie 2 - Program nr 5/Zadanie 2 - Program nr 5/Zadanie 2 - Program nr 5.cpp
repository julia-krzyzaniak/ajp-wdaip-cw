#include <iostream>
#include <climits>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	float km = 1.852; // bo 1852 m to 1.852 km

	cout << "Podaj wartosc w milach [mi]: ";
	cin >> a;
	cout << "Wartosc w kilometrach wynosi: " << a * km << endl;

}