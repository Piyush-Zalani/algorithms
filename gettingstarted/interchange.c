#include <stdio.h>
int main ()
{
	int c,d;
	printf ("Enter no's");
	scanf ("%d %d",&c,&d);
	c = c+d;
	d = c-d;
	c = c-d;
	printf("no after interchange c = %d \n d = %d ", c,d);
	return 0;

}
