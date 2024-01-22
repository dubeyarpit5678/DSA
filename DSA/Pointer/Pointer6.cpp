#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};
int main()
{//Object of rectangle i.e how to create the memeory in Heap 
	struct Rectangle r={10,5};
	struct Rectangle *p;
	p=(struct Rectangle *)malloc(sizeof(Rectangle));/*malloc function will allocate the memeory-- jitna Struct rectangle needs-- 
	--as malloc function returns a void pointer so as to typecast it struc rectangle is there */
	p->breadth=12;
	p->length=7;
	printf("%d, %d",p->length, p->breadth);
	return 0;
}
