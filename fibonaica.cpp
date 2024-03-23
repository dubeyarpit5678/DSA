#include<stdio.h>
int fib(int n);
int main(){
	int n;
	printf("Enter number: \n ");
	scanf("%d",&n);
	int fibN = fib(n);
	printf("FIbo of %d is : %d ",n,fibN);
	return 0;
	
}
int fib(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
	int fibNm1 = fib(n-1);
	int fibNm2 = fib(n-2);
	int fibN = fibNm1 + fibNm2;
	return fibN;
	 
	}
}
