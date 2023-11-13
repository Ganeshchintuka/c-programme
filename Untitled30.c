#include<stdio.h>
main()
{
	int a[50];
	int i,loc=-1,key,n=5;   //no.of elements
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	
		}	
key=4; //this is the value which you want at search	



for (i=0;i<5;i++)
{
	
	if (a[i]==key ) 
	{
		loc=i;
		//brake;
		printf(" %d",i+1);
	}
	
   }
if (loc!=-1)
{
	printf(" \n element found %d ", loc+1);
}

else
{
	printf(" \n element not found ",loc+1);
}
}

