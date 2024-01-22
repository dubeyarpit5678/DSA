#include<stdio.h>
//Call by reference 
void swap(int &x, int &y) //As reference doesn't take any extra space it is just another name of the acutal parameter
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
