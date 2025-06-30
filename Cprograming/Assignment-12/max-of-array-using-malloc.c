int* createarray(int);
void main()
{  
int size;
printf("Enter the size of array:-");
scanf("%d",&size);
int* mac=createarray(size);
	
	printf("Enter %d elements :-",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&mac[i]);
	}
	int max=mac[0];
	for(int i=0;i<size;i++)
	{
		if(mac[i]>max)
		{
			max=mac[i];
			
		}
	}
	printf(" The maxium from array is :-%d",max);
	
	
}
int* createarray(int size)
{ 
	int* x=malloc(size*sizeof(int));
	return x;	
}