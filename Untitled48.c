#include<stdio.h>
#include<stdio.h>
#include<string.h>
main()
{
	char s1[60]="love bake studio";
	char s2[60]= "is my sweet shop";
	int n=5;
	strcpy(s2,s1);
	strncpy(s2,s1,5);
	strcat( s1,s2);
strncat(s1,s2,5);
	printf( " context after concating s2 with output  is  %s \n",s1);
	



}

