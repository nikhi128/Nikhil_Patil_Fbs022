int main()
{
	
int arr[5];
demo(arr,5);
prime(arr,5);
}
void demo(int* arr,int ele)
{
	
	for(int i=0;i<5;i++)
	{
		printf(" Enter num to insert  %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
}
void prime(int* arr,int ele)
{

	for(int i=0;i<ele;i++)
	{ int flag=0;
	if(arr[i]>1)
	{
	
		int n=arr[i];
		for(int j=2;j<n;j++)
		{
			if(n%j==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf(" \n %d",n);
		}
	}
}

}