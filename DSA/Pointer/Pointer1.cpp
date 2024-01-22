#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10; //Decalaration
	int *p; 
	p=&a; //initialization
	printf("Using pointer %d\n",*p); //dereferncing
	printf("Address checking %d , %d",p,&a);
	return 0;
	
}
