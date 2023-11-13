// swapping the numbers
#include<stdio.h>
void ganesh(int *,int*);
main()
{
 int a=7, n=9;
 printf(" before swapping values of a =%d b=%d \n",a,n);
 ganesh(&a,&n);
 printf(" after swapping in main , values of a=%d b=%d\n",a,n);
	
	
}

void ganesh( int* x , int* y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf(" values of a =%d \n", *x,*y);
}
