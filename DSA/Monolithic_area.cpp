#include<stdio.h>
#include<iostream>
using namespace std;
//MONOLITHIC Programing 

int main()
{
	int length=0, breadth=0;
	printf("Enter the length and breadth: \n");
	cin>>length>>breadth;
	int area=length*breadth;
	int peri = 2*(length+breadth);
	printf("Area = %d \nPerimeter =  %d",area,peri);
	return 0;
}
