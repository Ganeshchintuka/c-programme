//generic , void pointer
#include<stdio.h>
 main()
{
	int x=10,y=9;
	char c='A' ;
	void *ptr;
	
	ptr=&x;
	
	printf(" the values at generic pointer is %d",*(int*)ptr);
	
	ptr=&c;
		printf(" \n  the values at generic pointer is %c   ",*(char*)ptr);
	
}
