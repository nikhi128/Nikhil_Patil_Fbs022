void main()
{
	int start=10,end=25;
	for(int i=start;i<end;i++)
	{
		int num=i;
		if(i%2==0)
		{
			printf(" \nEven numbers are %d",i);
		}

	}
	printf("\n");
	for(int i=start;i<end;i++)
	{
		int num=i;
		if(i%2!=0)
		{
			printf(" \n  odd numbers are %d",i);
		}

	}
}