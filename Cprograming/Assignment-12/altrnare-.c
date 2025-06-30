int* createarray(int);
void main()
{  
int size;
printf("Enter the size of array");
scanf("%d",&size);
int* mac=createarray(size);
	
	printf("Enter %d elements :",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&mac[i]);
	}
	int sum=0;
	for(int i=0;i<size;i=i+2)
	{
//		printf("%d",mac[i]);
       sum=sum+mac[i];
	}
printf(" The sum of altrnate number is %d",sum);
	
}
int* createarray(int size)
{ 
	int* x=malloc(size*sizeof(int));
	return x;	
}