#include<stdio.h>
int main()
{
	int n;
	printf ("Enter a number : ");
	scanf("%d",&n);
	if(n%2==0)
		printf("Number you entered is even");
	else
		printf("Number you entered is odd");
	return 0;

}
