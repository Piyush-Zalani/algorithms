#include <stdio.h>
int main()
{
	float cp,sp,p,l;
	printf("Enter cost price and selling price : ");
	scanf("%f%f",&cp,&sp);
	if (cp>sp)
	{
		l = cp - sp;
		printf("Loss = %f", l);
	}
	else
	{
		p = sp -cp;
		printf("Profit = %f", p);
	}
	return 0 ; 
}
