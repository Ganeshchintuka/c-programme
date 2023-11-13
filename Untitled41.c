#include<stdio.h>
main()
{
	int a[5];
	int *ptr,i;
	ptr=a;
	printf(" enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	printf(" the elements are \n");
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	}	
			
			
			
			
			
			
			
}
