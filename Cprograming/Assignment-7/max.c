int main()
{
	int arr[5];
	 
	 for(int i=0;i<5;i++)
	 {
	 	printf(" Enter number ");
	 	scanf("%d",&arr[i]);
	 }
	 printf("\n Mx ");
	 int max=arr[0];
	 for(int i=0;i<5;i++)
	 { 
	 
	 if(arr[i]>max)
	 {
	 	max=arr[i];
	 	 
	 }
	 }
	 	printf(" max is %d",max);
}