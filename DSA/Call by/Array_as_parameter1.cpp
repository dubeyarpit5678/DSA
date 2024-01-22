#include<stdio.h>
#include<stdlib.h>
//How a function can return an array 
int *fun(int n)
{
	int *P;
	P = (int *)malloc(n*sizeof(int));
	return(P);
}
int main()
{
	int *A;
	A=fun(5);
	printf("%d",A);
	
}
