#include <iostream>

using namespace std;

void display(int &a);

int main ()
{
	int a = 5;
	display(a);
	cout<< a;	
	return(0);

}

void display(int &a)
{
	a=4;

}
