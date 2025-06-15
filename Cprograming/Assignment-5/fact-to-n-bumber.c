#include<stdio.h>
int  main()
{
//	printf(" Enter range for Factorial ");
	
 
	for(int j=0;j<=20;j++)
	{
	
	int num=j;
	int fact=1;
	int i;
	for(i=1;i<=num;i++)
	{
			
		fact=fact*i;
		
	}
	printf(" The factorial of :%d:is %d \n",j,fact);
}

}