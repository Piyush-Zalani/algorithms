#include<stdio.h>
int main()
{
	int num, first, last, sum;
	printf ("Enter a four digit number : ");
	scanf ("%d",&num);
	first = num/1000;
	last = num%10;
	sum = first + last;
	printf ("Sum of first and last digit is : %d ", sum);
	return 0;

}
