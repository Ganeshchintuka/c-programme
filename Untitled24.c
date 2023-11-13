#include<stdio.h>
extern int n=9;
y=8;
 void mystatic();
main()
{
    int w;
    static int d;
    register int x=7, m;
    auto int k;
    
    k=y*y;
    
    printf(" \nvalue of k is %d",k);
    m=x*x;
    prinf(" \n  value of m is %d ",m);
    mystatic();
    mystatic();
    mystatic();
    
    
}
mystatic()
 {
	static int j=5;
	printf("\n value of static variable inside  function %d ",j);
	j++;
	printf(" \n value of extren variable inside function %d ",n);
	n++;
}
