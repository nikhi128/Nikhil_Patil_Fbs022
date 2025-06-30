int* createarray(int);
void main()
{  
int size;
printf("Enter the size of array");
scanf("%d",&size);
int* mac=createarray(size);
	
	printf("Enter element %d:",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&mac[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("%d",mac[i]);
	}
	
	int sum=0;
	for(int i=0;i<size;i++)
	{
		if(mac[i]%2==0)
		{
			printf("\n Even number is %d",mac[i]);
		}
		else 
		{
			printf("\n Odd Numbers are %d",mac[i]);
		}
	}
	
}
int* createarray(int size)
{ 
	int* x=malloc(size*sizeof(int));
	return x;	
}