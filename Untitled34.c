#include<stdio.h>
main()
{
	int a=7;
	int *aptr;
	aptr=&a;

    printf(" value of a is %d \n", a);
		printf(" adress of a is %p \n", &a);
		 printf(" adress of aptr pointer is %p \n ",*aptr);
		  printf(" what is the adress held in pointer aptr %u \n",aptr);
	     	printf (" actual value adress  %d \n",*aptr);
		
	
}
