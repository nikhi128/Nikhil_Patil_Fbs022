#include<stdio.h>
void main() {

	printf(" 1 for Even or odd \n 2 for prime or not \n 3 for palindrome or not \n 4 for postive negative or zero \n 5 for reverse \n 6 for find sum of digits \n");
	int ch;

	printf("Enter your choice:");
	scanf("%d",&ch);

	if(ch==1) {
		int even=2;
		printf(" Enter number to check even or odd :");
		scanf("%d",&even);
		if(even%2==0)
			printf(" The number is  even ");
		else
			printf(" The number is odd");
	} else if(ch==2) {
		int num;
		printf(" Enter number to check prime or not  ");
		scanf("%d",&num);

		if(num%1==0 && !(num%2==0))
			printf(" The number is prime: %d",num);
		else
			printf(" The number is not prime");

	} else if( ch==3) {
		int num2,r1;

		printf(" Enter the number to check palindrom or not  :");
		scanf("%d",&num2);
		int demo=num2,res=0;
		while(num2>0) {
			r1=num2%10;
			res=res*10+r1;
			num2=num2/10;

		}
		if(demo==res)
			printf(" The number is palandrome");
		else
			printf(" The number is not palandrome");

	}

	if(ch==4) {
		int num3;
		printf(" Enter number to check positive ,negative or zero :");
		scanf("%d",&num3);

		if(num3>0) {
			printf(" The number is positive");
		} else if(num3==0)
			printf(" The number zero ");

		else
			printf(" The number negative");

	}
if(ch==5)
{
	int num4;
	int temp=num4;
	printf(" Enter number to reverse ");
	scanf("%d",&num4);
	int rev=0;
	while(num4!=0)
	{  
		int r1=num4%10;
		    rev=rev*10+r1;
		    num4=num4/10;
		    
	 } 
	 printf(" The reverse is %d",rev);
}
if(ch==6)
{ 
int num4;
	printf(" Enter the number for sum :");
	scanf("%d",&num4);
	int r1, sum=0;
	while(num4>0)
	{ 
		 r1=num4%10;
		sum=sum+r1;
		num4=num4/10;
	}
	printf(" The addition of numbar is %d",sum);
	
}
}