#include<stdio.h>
#include<math.h>
int main()

{

	int a,b,c,area,p;
	printf("enter three sides of triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	p = (a+b+c)/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("area = %d", area);
	return 0;

}
