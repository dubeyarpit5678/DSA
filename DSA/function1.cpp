#include<stdio.h>
int add(int a, int b)//prototype of function a and bb are formal parameters.
{ 
//Declaration and definition of function
	int c;
	c=a+b;
	return(c);
}
int main()
{
	int x,y,z;
	x=156;
	y=234;
	int Sum=add(x,y);//Actual parameters
	printf("Sum is %d",Sum);
	return 0;
}
