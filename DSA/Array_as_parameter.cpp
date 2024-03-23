#include<stdio.h>
#include<stdlib.h>
#include<iostream>
// To print Array elements using pointer and function by declaring array in main function 
using namespace std;
void fun(int *A, int n)
{
/*	for(int i=1;i<7;i++)
	{
		printf("%d\n",A[i]);
	}
	printf("%d",sizeof(A)/sizeof(int));
	*/
	A[0]=10;
	
}
int main()
{
	int A[]={2,3,4,5,6,7};
	int n=6;
	fun(A,n);
	for(int i=1;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	/* for(int x:A)
	cout<<x<<" ";
	*/
	return 0;
}
