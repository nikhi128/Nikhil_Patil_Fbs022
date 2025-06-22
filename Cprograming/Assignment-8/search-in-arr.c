int main() {
	int arr[5];
	int ele;

		insert(&arr,5);
		display(&arr,5);
		printf(" Enter element to search ");
		scanf("%d",&ele);
		search( &arr,5,ele );
		


	
}

	void insert(int* arr,int ele) 
	{
		for(int i=0;i<ele;i++)
		{ 
		   printf(" Enter ele %d :  ",i+1);
		   scanf("%d",&arr[i]);
			
		}
	
}

void display( int* arr,int ele) {
	for(int i=0; i<ele; i++) {
		printf("\n The array %d",arr[i]);
	}
	
}
void search(int* arr,int end,int ele )
{  
    
   for(int i=0;i<end;i++)
   {
   	if(arr[i]==ele)
   	{
   		printf("\n Element found at %d index ",i);
	   }
   }
}

