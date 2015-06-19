#include <stdio.h>
int main()
{
	int num ,total, d;
	printf("Enter the five digit number : ");
	scanf ("%d",&num);
	d=num%10;
	total=d;
	d= (num/10)%10;
	total= total + d;
	d =  (num/100)%10;
	total = total + d;
	d= (num/1000)%10;
	total= total + d;
	d= (num/10000)%10;
	total= total + d;
	printf("Total = %d",total);
	return 0;
}
