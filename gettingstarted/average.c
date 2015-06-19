#include <stdio.h>
 int main ()
{

	int a,b,c,d,e,sum, ave , per;
	printf ("Enter marks of 5 subject : ");
	scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
	sum  = a+b+c+d+e;
	ave = sum/5;
	per = sum*100/500;
	printf ("Average = %d \n Percentag = %d", ave , per);
	return 0 ;
}
