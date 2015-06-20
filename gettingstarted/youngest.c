#include <stdio.h>
int main()
{
	int r,s,a;
	printf ("Enter age of ram , sham and ajay : ");
	scanf("%d%d%d",&r,&s,&a);
	if ((r<s)&&(r<a))
		printf("Ram is youngest");
	else if ((s<a)&&(s<r))
		printf("Sham is youngest");
	else 
		printf("ajay is youngest");
	return 0;
}
