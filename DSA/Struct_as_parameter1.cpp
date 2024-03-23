#include<stdio.h>
//CALL BY ADDRESS
struct Rectangle
{
	int length;
	int breadth;
};
void changeLength(struct Rectangle *p, int l)
{
	p->length=l;
//	printf("%d,%d",r.length,r.breadth);  for pointer r.length wont work, p->length works
	printf("%d,%d",p->length,p->breadth);
 } 
 int main()
 {
	struct Rectangle r={2,3};
	printf("%d,%d\n",r.length,r.breadth);
	changeLength(&r,20);
	return 0;
 }
