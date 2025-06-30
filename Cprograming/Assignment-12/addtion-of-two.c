#include<stdio.h>
#include <stdlib.h>
int* createarray(int ,int );
void main()
{
	
	int s1,s2;
printf("Enter the size of array:-");
scanf("%d",&s1);
printf("Enter the size of array:-");
scanf("%d",&s2);

	int* sum=createarray(s1,s2);	

for(int i=0;i<s1;i++)
		{ 
		   printf(" \n The sum of %d index is  : %d  ",i,sum[i]);	
		}
}
int* createarray(int arr,int brr)
{
	
	int* x=malloc(arr*sizeof(int));
    int* z=malloc(brr*sizeof(int));
    
    printf("Enter 1 array elements :-");
	for(int i=0;i<arr;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter 2 array  elements :-");
	
	for(int i=0;i<brr;i++)
	{
		scanf("%d",&z[i]);
	}
	int* y=malloc(brr*sizeof(int));
	
	for(int i=0;i<5;i++)
	{
		y[i]=x[i]+z[i];
	}
	
	return y;
		
	



}