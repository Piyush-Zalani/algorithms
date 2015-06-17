#include <iostream>

using namespace std;

int main()
{
	int a = 4;
	int &b = a;
	
	cout << a << endl;
	cout << b << endl;

	a=5;

	cout << a << endl;
	cout << b << endl;

	b = 6;

	cout << a << endl;
	cout << b << endl;
	return 0;
}
