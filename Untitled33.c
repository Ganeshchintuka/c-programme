#include<stdio.h>
main()
{
	int i,j;
	int a [2][2];
	
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a [i][j]);
		}
	}

	printf(" show the elements of array ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d", a[i] [j]);
					}
		
}

   
}
