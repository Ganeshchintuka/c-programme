#include<stdio.h>
main()
{
	int a[3]={4,5,8};
	int *ptr[3], i;
	
	for (i=0;i<3;i++)
	{
		ptr[i]=&a[i];
	}
	printf("print the elemesnts using pointer \n \a ");
	for(i=0;i<3;i++)
	{

	}
               printf("%d", *ptr[i]);
			   	
}
