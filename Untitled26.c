#include<stdio.h>


main()

{
	int a[5]={1,2,3,4,5};
	a[5]=1;
	
	printf(" the adresses are %u\n %u \n %u " , &a[0], a, &a);
	
}
