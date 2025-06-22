int main()
{
	int arr[5]={13,5,4,17,23};
	int count=0,num;
	for(int i=0;i<5;i++)
	{ 
	   num=arr[i];
	   int flag=0;
		for(int j=2;j<5;j++)
	{  
		if(num%j==0)
		{
		flag=1;
		//printf(" \n The prime  not primenumber %d",arr[i]);	
		}
	}
		if(flag==0)
		{   count++;
			printf(" \n prime %d",num);
			
			
		}
	
	}
	printf(" \n Prime numbers in array %d",count);
	
	
}