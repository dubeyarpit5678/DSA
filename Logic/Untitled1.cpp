#include<stdio.h>
//Pass by value or Call by value 
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	a=20;
	b=25;
	swap(a,b);
	printf("%d, %d",a,b);
	return 0;
}
