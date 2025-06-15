void main() {
	int start=2,end=0,n=0;
printf(" Enter number to print ");
	scanf("%d",&end);
	for(int i=start; i<=end;i++) 
	{

		n=i;
		int flag=0;
		for(int j=2; j<n;j++) {
			if(n%j==0) 
			{
				//	printf(" Not prime%d \n",j);
				flag=1;
				//break;
			}
		}
		if(flag==0) 
		{
			printf("  Prime number %d \n",i);
		}
	}


}