#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter angles of triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
		printf("triangle is valid");
	else 
		printf("triangle is invalid");
	return 0;
}
