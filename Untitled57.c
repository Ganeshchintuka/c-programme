#include<stdio.h>
#include<string.h>
struct Ganesh
{
	char name[20];
	int age;
	
};
void show(struct Ganesh g);
main()
{
	struct Ganesh g1={ 1,17};
	// calling the function
	show (g1);
	
	
	
};

void show(struct Ganesh g)
{
	struct Ganesh g2;
	printf(" id is %d ", g.id);
	printf(" age is %d\n  ", g.age);
	g2.age=32;
	g2.id=7843;
	return g2;
	
}


