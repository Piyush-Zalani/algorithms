#include <stdio.h>
int main()
{
	int n,d;
	printf("Enter the valune of n : ");
	scanf ("%d",&n);
	if(n>100)
	{
		d=n/100;
		printf("no of 100 rs is : %d",d);
		n=n%100;
	}
	if (n>50)
	{
		d=n/50;
		printf("no of 50 rs is : %d",d);
		n=n%50;
	}
	if (n>20)
	{
		d=n/20;
		printf("no of 20 rs is : %d",d);
		n=n%20;
	}
	if(n>10)
	{
		d=n/10;
		printf("no of 10 rs is : %d",d);
		n=n%10;
	}
	if(n>10)
	{
		d=n/5;
		printf("no of 5 rs is : %d",d);
		n=n%5;
	}
	if(n>2)
	{
		d=n/2;
		printf("no of 2 rs is : %d",d);
		n=n%2;
	}
	printf("no of 1 rs is : %d",n);
	return 0;
}
