void main()
{
	int arr[5]={1,2,3,4,5};
	int rev[5];
	
	for(int i=0,j=4;i<5;i++,j--)
	{
		rev[i]=arr[j];
	}
for(int i=0;i<5;i++)
{
	printf(" %d",rev[i]);
}
}