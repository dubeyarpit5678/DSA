#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};
int main()
{//pointer to a Strructure 
	struct Rectangle r={10,5};
	struct Rectangle *p=&r;
	(*p).length=20;//syntax
	p->breadth=15; //pointer to a structre way of writing //Syntax.
	printf("%d, %d",r.length, r.breadth);
	return 0;
}
