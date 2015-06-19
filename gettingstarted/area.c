#include <stdio.h>
int main()

{

	float l,b,r,a,p,c;
	printf("Enter lenght and breadth of a rectangle and redius of a circle :");
	scanf ("%f\t%f\t%f",&l,&b,&r);
	a = l*b;
	p = 2*(l+b);
	printf("area of rectange = %f \n Parameter of rectangle = %f \n", a,p);
	a=0;
	a= 3.14 * r * r;
	p = 2 * 3.14 * r;
	printf("area of circle = %f \n perameter of circle = %f ", a,p);
	return 0;
}
