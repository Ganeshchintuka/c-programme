#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]=" national ";
	char s2[20]=" National";
	 //int n=4;
	// strcat(s1,s2);
	// strncat(s1,s2,n);
//	printf(" %s \n ",s1);
int x;
//x=strncmp(s1,s2,4);
//printf(" %d",x);
x=strlwr(s2);
printf(" %s",s1);

	return 0;
}
