#include<stdio.h>
int main()
{
	int num;
	int last,first;
	printf(" Enter the number ");
	scanf("%d",&num);
	
	last=num%10;
	while(num>0)
	{
		first=num%10;
	        num=num/10;
		
	}
	int sum=last+first;
	printf(" The sum of first and last digits is %d ",sum);
}