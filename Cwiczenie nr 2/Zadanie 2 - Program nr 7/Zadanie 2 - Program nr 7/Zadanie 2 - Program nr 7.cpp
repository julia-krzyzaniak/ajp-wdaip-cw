#include <iostream>

using namespace std;

enum dni
{
	pon = 1,
	wt = 2,
	sr = 3,
	czw = 4,
	pt = 5,
	so = 6,
	nd = 7
};

int main()
{
	int a;
	

	cout << "Podaj liczbe: ";
	cin >> a;

	switch (a) {

		case 0:
		cout << "Blad";
		break;

		case dni(pon):
		cout << "Poniedzialek";
		break;

		case dni(wt):
		cout << "Wtorek";
		break;
		
		case dni(sr):
		cout << "Sroda";
		break;
		
		case dni(czw):
		cout << "Czwartek";
		break;
		
		case dni(pt):
		cout << "Piatek";
		break;
		
		case dni(so):
		cout << "Sobota";
		break;

		case dni(nd):
		cout << "Niedziela";
		break;
	}

}
