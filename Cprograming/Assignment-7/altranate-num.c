void main()
{
	int arr[5];
	int i;
	for( i=0;i<5;i++)
	{   printf("\nEnter number :-");
		scanf("%d",&arr[i]);
	}
	int sum=0;
	int* x=&arr;

	for(int x=0;x<=4;x=x+2)
	{   

		sum=sum+arr[x];		
	}
	
printf("%d",sum);

}