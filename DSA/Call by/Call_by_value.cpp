#include<stdio.h>
//call by value 
void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a,b;
	a=10;
	b=15;
	swap(a,b);
	printf("%d, %d",a,b);
	return 0;
}
