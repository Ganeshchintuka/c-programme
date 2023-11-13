#include<stdio.h>
main()
{
 int 	a[6]={5,4,9,7,3,2};
 int hold,i,j;
 int n=6; //  n is the no of elements.
 
 //loop to control the passess; 6-1=5;
 
 for (i=0;i<n-1;i++)
 {
 	for ( j=0;j<i-1;j++)
 	{
 		if (a[j]>a[j+1])
 		{
 			hold=a[j];
 			a[j]=a[j+1];
 			a[j+1]=hold;
 			
		 }
	 }
 	
   }
   for (i=0;i<n;i++)
   {
   	printf(" \t  %d ",a[i]);
   }
   
	
}


