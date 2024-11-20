#include <iostream>
#include <climits>
#include <conio.h>


using namespace std;

int main()
{
	int a;
	float m = 0.0254; // bo 2.54 / 100


	cout << "Podaj wartosc w calach [in]: ";
	cin >> a;

	cout << "Wartosc w metrach wynosi: " << a * m << endl;
		

}