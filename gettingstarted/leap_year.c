#include<stdio.h>
int main()
{
	int n;
	printf ("Enter year : ");
	scanf("%d",&n);
	if(n%4==0)
		printf("Year you entered is leap year");
	else
		printf("Year you entered is not a leap year");
	return 0;

}
