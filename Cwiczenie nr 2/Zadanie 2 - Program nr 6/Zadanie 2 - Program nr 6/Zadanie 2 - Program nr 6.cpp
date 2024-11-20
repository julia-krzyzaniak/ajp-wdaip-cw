#include <iostream>
#include <stdlib.h>

using namespace std;

int main()

{
	srand(time(0));
	cout << "Wylosowanie liczby: " << rand() % 50 << " ";
}
