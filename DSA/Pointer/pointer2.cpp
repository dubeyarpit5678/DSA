#include<stdio.h>
int main(){
	int A[5]={2,4,6,8,10};
	int *p;
	p=A; // No need of using '&' while pointer using for Array, as Array itself starts from 0th index
	for(int i;i<5;i++)
	{
		printf("%d\n",A[i]);	
		printf("%d\n",p[i]);	//in Such cases pointer acts as an name of an array not an address			
	}
	return 0;
}
