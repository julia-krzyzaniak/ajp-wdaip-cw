#include <iostream>
#include <climits>
#include <conio.h>

using namespace std;

int main()
{

    int i = INT_MAX;
    int i2 = INT_MIN;
    short s = SHRT_MAX;
    short s2 = SHRT_MIN;
    long l = LONG_MAX;
    long l2 = LONG_MIN;

    cout << "liczba bajtow dla inta to " << sizeof(int) << endl;
    cout << "liczba bajtow dla short to " << sizeof(short) << endl;
    cout << "liczba bajtow dla long to " << sizeof(long) << endl;


    cout << "najmniejszy short ma " << s2 << ", a najwiekszy short ma " << s << endl;
    cout << "najmniejszy long ma " << l2 << ", a najwiekszy long ma " << l << endl;
}