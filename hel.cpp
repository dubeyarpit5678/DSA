#include<stdio.h>

int main()
{
	int n;
	char A[255][50];
	printf("Enter the number of people you want to greet: \n");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		printf("Enter name of person %d: \n",i);
		scanf("%s",A[i]);
	}
	for(int j=1; j<=n;j++)
	{
		printf("Hello, %s \n",A[j]);
	}
	return 0;
}
