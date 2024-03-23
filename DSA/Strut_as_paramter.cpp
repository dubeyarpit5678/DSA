#include<stdio.h>
//CALL BYE VALUE 
struct Rectangle
{
	int length;
	int breadth;
};
/*
int area(struct Rectangle r)
{
	return r.length*r.breadth;
}
int main()
{
	struct Rectangle r={2,4};
	printf("%d ",area(r));
	return 0;
}
*/
void area(struct Rectangle r)//both the r in funciton and main is different 
{
	r.length=20;//this means any value changed in function will not affect main as it is Call by value
	printf("%d, %d",r.length,r.breadth);
}
int main()
{
	struct Rectangle r={2,3};
	printf("%d,%d\n",r.length,r.breadth);
	area(r);
	return 0;
}
