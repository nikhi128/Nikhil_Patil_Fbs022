#include<stdio.h>
int main()
{
	int n1;
	int n2;
	int choice;
	printf(" Enter two numbers ");
	scanf(" %d",&n1);
	printf(" Enter two numbers ");
	scanf(" %d",&n2);
	
	
	printf(" If you enter 1 addition ,2 will be sunbtraction \n ,3 will be division ,4 will be  miltiplication ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		int add=n1+n2;
		printf("The addition is %d",add);
	}
	else if(choice==2)
	{
		int sub=n1-n2;
		printf(" The subtraction will be %d ",sub);
	}
	
	else if(choice==3)
	{
		int div=n1/n2;
		printf(" The division will be %d",div);
	}
		else if(choice==4)
	{
		int mul=n1*n2;
		printf(" The Multiplication will be %d",mul);
	}
}