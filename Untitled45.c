//maloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr,i,n1,n2;
	n1=5;
	ptr=(int*)malloc(n1*sizeof(int));
	for(i=0;i<n1;i++)
	{
	
	printf(" the adress of allocated memory %d\n",ptr+i);
                       }
                       
   n2=10; //new location 
   ptr=realloc( ptr,n2*sizeof(int));
   for(i=0;i<n2;i++)
   {
   	printf(" the adress of newly allocated memory%d\n",ptr+i);
   }
   free(ptr);
                       
}
