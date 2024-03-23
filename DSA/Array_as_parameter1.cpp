#include<stdio.h>
#include<stdlib.h>
// Printing array without declarung array in main function 
int *fun(int size)
{
	int *p;
	p = (int *)malloc(int(size)*sizeof(int));//array is created in heap as malloc used and it is created inside function fun but even main function can access it as ptr is used.
	for(int i=0;i<size;i++)
	{
		p[i]=i+1;
	}
	return p;
}
int main()
{
		int *ptr, sz=5;
		ptr=fun(sz);
		for(int i=0;i<sz;i++)
		{
			printf("Element: %d \n",ptr[i]);
			printf("Address if element: %d \n",&ptr[i]); //and if needed address of each element in array than &ptr works 
		}
	return 0;
}
