#include<stdio.h>
//Static variable 
// And if the variable is declared outside the code than its global variable.
// int x=0;
int fun(int n)
{
	static int x=0;
	if(n>0)
	{
		return fun(n-1)+n;
	}
	return 0;
}
int main()
{
		int r;
		r=fun(5);
		printf("%d", r);
		return 0;
}
