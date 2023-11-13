#include<stdio.h>
 int a=10;
fun1()
{

  



printf("\n value of global a inside fun1 %d \a",a);
  a++;
}
fun2()
{
 static a=5;	
printf("\n value of the inside fun2 %d \a",a);
a++;
	
	
}

main()
{

fun1();
fun1();
fun1();
fun2();
fun2();
fun2();
}
