#include<stdio.h>
#include<string.h>
union Ganesh
{
	int i;
	float f;
	char str[20];
	
};

struct Karthikeya 
{
	int i;
	float f;
	char str[20];	
};
main()
{
	union Ganesh g;
	struct Karthikeya k;
	
printf(" size is %d \n \a ", sizeof (g));
printf(" size is %d \n", sizeof (k));
}
