#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10;
	// "int a" to store integer.
	// "int *r" means pointer to store address
	/* "int &a=b" means referencs-- '&a' dosent means anything when used '&a' then to whon we are referencing is important to declare
	For Ex. If a person's name is Rajendra and his nick name is Raj,
	than a is Raj and b is Rajendra */
	int &r=a;// reference doesn't consumes the memory it is not pointer 
	int b=25;
	r=b;//value of b gor stored in r and as r and a are same so a=r=25;
	printf("%d, %d",a,r);	
	 return 0;
}
