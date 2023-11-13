#include<stdio.h>
int fact1(int);
main()
{
	int a=5;
printf(" factorial is :%d",	fact1(a));

	
}
int fact1(int x)
{
	if (x==0 || x==1) 
	return 1;
	else
	return x*fact(x-1 ); 
}
