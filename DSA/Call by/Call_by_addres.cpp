#include<stdio.h>
// Call  by address
void swap(int *x, int *y)//pointer is used becuase x and y will have the address of a and b-- and *x and *y will point towards a and b
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a,b;
	a=10;
	b=15;
	swap(&a,&b);//'&' is used for reference the address of a and b will be stored in x and y 
	
	printf("%d, %d",a,b);
	return 0;
}
