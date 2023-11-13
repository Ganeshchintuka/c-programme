//pointer to pointer
#include<stdio.h>
main()
{
	int i, *j,**k;
	j=&i;
	k=&j;
	printf(" adress i=%d   j=%d  k=%d \n ", &i,&j,&k);
		printf(" value i=%d   j=%d  k=%d \n ", j,k);
}
