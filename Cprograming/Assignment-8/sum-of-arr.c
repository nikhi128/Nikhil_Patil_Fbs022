int main() {
	int arr[5];
	int ele;

		insert(&arr,5);
		display(&arr,5);
//		printf(" Enter element to search ");
//		scanf("%d",&ele);
		ADD( &arr,5);
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

void ADD(int* arr,int range)
{ int sum=0;
	for(int i=0;i<range;i++)
	{
		sum=sum+arr[i];
	}
	printf(" \n The sum of array is :%d",sum);
}