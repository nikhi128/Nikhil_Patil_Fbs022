int* search(int);
void main()
{
	int size=5;
	int* x=search(size);
	printf(" The element found on index %d",x);
	free(x);
}
	int* search(int size) 
	{  
	  int* arr=malloc(size*sizeof(int));
		for(int i=0;i<size;i++)
		{ 
		   printf(" Enter ele %d :",i+1);
		   scanf("%d",&arr[i]);		
		}	
		
		for(int i=0;i<size;i++)
		{ 
		   printf(" \n%d",arr[i]);

		}	
		
		int ch=0;
		printf("Enter you want to search");
		scanf("%d",&ch);
	
		for(int i=0;i<size;i++)
		{ 
		   if(arr[i]==ch)
		   {
		   	return i;
	}
		}	
}
