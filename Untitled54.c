#include<stdio.h>
struct student
{

int reg ;
int marks [10];
char name ;
	
}s1;
main()
{
//	s1={12201890,{ 92,98,95}};
	s1.reg =12201890;
	printf("%d", s1.reg);
	int i;
	for (i=0;i<3;i++)
	{
		scanf(" %d",&s1.marks[i]);
			}
			for (i=0;i<3;i++)
			{
				printf("%d ",s1.marks[i]);
			}
}
