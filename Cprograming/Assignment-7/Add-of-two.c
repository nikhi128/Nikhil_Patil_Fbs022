#include<stdio.h>
int main()
{
	int arr[5],brr[5],crr[5];
	//int i=0;
	for(int i=0;i<5;i++)
	{
		printf(" Enter Elements in first array :-");
		scanf("%d",&arr[i]);
	
	}	
	for(int i=0;i<5;i++)
	{
		printf(" \n Elements of first array :- %d",arr[i]);	
	}
	
	for(int i=0;i<5;i++)
	{
		printf("\n Enter Elements in Second array :-");
		scanf("%d",&brr[i]);
	
	}	
	for(int i=0;i<5;i++)
	{
		printf(" \n Elements of first second:- %d",brr[i]);	
	}
	
	for(int j=0;j<5;j++)
	{
		int sum=0;
		crr[j]=arr[j]+brr[j];
		
		printf(" \n sum:- %d",crr[j]);	
	}
	
//	for(int i=0;i<5;i++)
//	{
//		printf(" \n sum:- %d",crr[i]);	
//	}
//	
}