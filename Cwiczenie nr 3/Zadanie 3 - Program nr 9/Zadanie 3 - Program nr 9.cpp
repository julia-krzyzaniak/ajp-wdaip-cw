#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    srand(time(NULL));

	int i, j, liczba;

	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 5; j++) {
			liczba = (rand() % 100);
			cout << liczba << " ";
		}
		cout << endl;

	}


}

