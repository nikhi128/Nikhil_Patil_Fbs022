void main()
{
	int arr[5]={5,4,3,2,1};
	int rev[5];
	reverse(arr,rev,5,4);
}

void reverse(int* arr,int* rev,int size,int size_actual)
	
	{
	
	for(int i=0,j=size_actual;i<size;i++,j--)
	{
		rev[i]=arr[j];
	}
for(int i=0;i<5;i++)
{
	printf(" %d",rev[i]);
}
}