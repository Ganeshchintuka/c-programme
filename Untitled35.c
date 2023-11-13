#include<stdio.h>
main()
{

int *nptr;
char *cptr;
float *fptr;


printf(" size of the pointer %d ",sizeof(nptr));
printf(" size of the char %d ",sizeof(cptr));
printf(" size of the float %d ",sizeof(fptr));
}
#include<stdio.h>

{
	int i,n,fact=1;
	int *pn,*pfact;
	pn=&n;
	pfact=&fact;
	*pn=5;
	
	for(i=0;i<*pn;I++)
	{
		*pfact=*pfact*i;
	}
	printf(" the factorial value is %d", *pfact);
}
