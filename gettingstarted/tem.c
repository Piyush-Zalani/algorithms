#include <stdio.h>

int main()
{

	float f,c ;
	printf("Enter temprature in ferenhite");
	scanf("%f", &f);
	c = (f-32)/1.8;
	printf ("Temprature in celcius = %f",c);
	return 0 ;
}
