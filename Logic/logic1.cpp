#include<stdio.h>
//Code to build logic!!
/* PRINT
*
**
***
****
*****

*****
****
***
**
*
*/
int main()
{
	int a,b;//a=rows and b=columns
	for(int a=1;a<=5;a++)
	{
	for(int b=1;b<=a;b++)
	{
		printf("* ");
	}
	printf("\n");
	}
printf("\n");
	/*
	for(int x=5;x>=1;x--)
	{
		for(int y=5;y<=x;y++)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/
	return 0;	
}
