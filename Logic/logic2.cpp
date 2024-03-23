#include<stdio.h>
int main()
{
	int a,b,j=0, space;//b=final row.
	printf("Enter the no. of * needed i last row: ");
	scanf("%d",&b);
	for(int i=1;i<=5;i++,j==0 )
	{
		for(space =1; space<=i-1;space++)
		{
			printf(" ");
		}
		while(j != 2 * i - 1)
		{
			printf("* ");
			j++;
		}
		printf("\n");
	}
	return 0;
}
