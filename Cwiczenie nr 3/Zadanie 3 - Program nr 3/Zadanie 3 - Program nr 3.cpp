#include <iostream>

using namespace std;

int main() {

	int j = 2, k = 2;

	/*pętla for*/

	cout << "Petla for: " << endl;

	for (int i = 2; i <= 30; i++) {

		if(i % 2 == 0)
			cout << i << endl;
	}
	cout << endl;

	/*pętla while*/

	cout << "Petla while: " << endl;

	while (j <= 30) {
		if (j % 2 == 0) {
			cout << j << endl;
		}
		j++;
	}

	cout << endl;

	/*pętla do while*/

	cout << "Petla do while: " << endl;

	do {
		if (k % 2 == 0) {
			cout << k << endl;
		}
		k++;
	} while (k <= 30);
	
}






