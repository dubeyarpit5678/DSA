#include<stdio.h>
#include<iostream>
using namespace std;
//MODULAR Programing 

int area(int length,int breadth)
{
	return length*breadth;
}
int perimeter(int length,int breadth)
{
	return 2*(length+breadth);
}
int main()
{
	int length=0, breadth=0;
	printf("Enter the length and breadth: \n");
	cin>>length>>breadth;
	int a=area(length,breadth);
	int peri=perimeter(length,breadth);
	printf("Area = %d \nPerimeter =  %d",area,peri);
	return 0;
}
