#include <stdio.h>

int main ()

{

	float km ,m ,feet , inch , cm;
	printf ("Enter distance between two cities : ");
	scanf ("%f" ,&km);
	
	m = km * 1000;
	feet = km * 3280;
	inch = km * 39370;
	cm = km * 10000;
	
	printf("Distance = %20f meter,\n%20f feet,\n%20f inch,\n%20f cm. \n" , m, feet, inch, cm);
	return 0;
}
