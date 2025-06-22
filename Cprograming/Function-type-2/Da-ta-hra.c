#include<stdio.h>
void main()
{
	int x=salary();
	
	printf(" The salary will be %d",x);
	
	printf("The salary will be ");
}
int salary()
{

int salary=5000;
	int da,ta,hra;
	if(salary<=5000)
	{
		
		printf(" If block \n");
		da=salary*0.10;
		printf("The Dearness Allowance is :%d\n",da);
		
		ta=salary*0.20;
		printf(" The Travel Allowance is :%d\n",ta);
		
		hra=salary*0.25;
		printf(" The House  Rent Allowance is %d \n",hra);
		
	int totsal;//=da+ta+hra+salary;
//	printf(" The salary will be %d",totsal);
	return totsal=da+ta+hra+salary;	
	}
	else
	{ 
	printf(" Else block \n");
		da=(15%salary)*100;
		printf("The Dearness Allowance is :%d\n",da);
		
		ta=(25%salary)*100;
		printf(" The Travel Allowance is :%d\n",ta);
		
		hra=(30%salary)*100;
		printf(" The House Rent Allowanceis %d \n",hra);
		int totsal2;//=da+ta+hra+salary;
		//printf(" The total salary %d",totsal2);
		
		return totsal2=da+ta+hra+salary;
	}
}