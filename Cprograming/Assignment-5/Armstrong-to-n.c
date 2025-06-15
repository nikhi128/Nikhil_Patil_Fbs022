#include<stdio.h>
void main()
{  

int demo;
printf(" Enter the Range to print Armstrong numbers :-");
scanf("%d",&demo);

for(int j=1;j<demo;j++)
{

		
	int num=j,sum=0,r1;
	
	int temp=num;
	int count=0; 
	while(num>0)
	{
		count++;
		num=num/10;
	}
//	printf("%d   %d",temp,count);
	
	num=temp;
	
	while(num>0)
	{
		 r1=num%10;
		int res=1,i=1;
		for(int j=1;j<=count;j++)
		{
			res=res*r1;
		}
		sum=sum+res;
		num=num/10;
	}
	if(sum==temp)
	printf("%d \n",sum);
	
	
}
}
