#include<stdio.h>
int main()
{
	 int num;
	printf(" Enter the range of Strong number");
	for(int j=1;j<=num;j++)
	{
	
	 num=j;
	int sum=0,rem,fact;;
	int num2=num;
	while(num>0)//1
	{
		rem=num%10;//2
		fact=1;
		while(rem>=1)//3
		{  
			//int fact=1;//4
			fact=fact*rem;//5
			rem--;//6
		}
		
		sum=sum+fact;//7	
		num=num/10;//9		 
	}
}
 
 printf(" The number is Strong number");
 
}