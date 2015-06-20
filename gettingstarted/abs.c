#include <stdio.h>
int main ()
{
	int a,b;
	printf("Enter a number :");
	scanf("%d",&a);
	if (a<0)
	a = -(a);
	printf("Absolute of given no is : %d",a);
	return 0;

}
