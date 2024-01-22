#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(5*sizeof(int)); //for C++ the syntax is-- p=new int[5];
	p[0]=1; p[1]=3; p[2]=5; p[3]=7; p[4]=9;
	for(int i=0;i<5;i++)
	{
		printf("%d\n",p[i]);
		
	}
	return 0;
}
