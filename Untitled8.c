#include<stdio.h>

main()
{
	int k;
	for( k=2; k<=6;k++)
	{
		if(k<7)
		{
		goto abc;	
		}
	if(k<6)
	{
		goto cde;
	}
		abc:
			printf(" chnage the value");
			
			cde:
			printf(" karthikeya");
			
			
	}
	
	
	
	
	
	
}
