#include<stdio.h>
int main(){
	float price[3];
	
	printf("Enter value of 1st price: ");
	scanf("%f", &price[0]);

	printf("Enter value of 2nd price: ");
	scanf("%f", &price[1]);
	
	printf("Enter value of 3rd price: ");
	scanf("%f",&price[2]);
	
	printf("Prizes after 18 percent GST: %f , %f, %f",price[0] + (0.18*price[0]), price[1] + (0.18*price[1]) , price[2] + (0.18*price[2]));
	return 0;
}
