float circle();
#include<stdio.h>
void main()
{    float res;
	res=circle();
		printf("%f",res);
}


float circle()
{
	float pie,radius,area;
	pie=3.14159;
	radius=20;
	
	area= pie*radius*radius;
	//printf("%f",area);
	
	return area;
	
}