#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int *b = &a;
	
	cout << a;
	cout << *b;

	a = 6;

	cout << a;
	cout << *b;

	*b = 7;
	cout << a;
	cout << *b;

	return 0;

}
