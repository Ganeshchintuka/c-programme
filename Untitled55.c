//nested array
#include<stdio.h>
struct result
{
	int marks;
	
};
struct student 
{
	int regno;
	
	struct result r1;
}s1;
main()
{
	s1.regno=1;
	s1.r1.marks=99;
	printf("%d \n", s1.r1.marks);
	printf("%d \n",s1.regno);
	
 
}
