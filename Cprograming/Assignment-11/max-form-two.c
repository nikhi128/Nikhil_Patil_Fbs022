void main()
{   int n1,n2;
	char s1[n1];
	printf("Enter string 1 :");
	scanf("%s",s1);
	char s2[n2];
	printf("Enter string 2 :");
	scanf("%s",s2);
	int i=0;
	int j=0;
	while(s1[i]!='\0')
	{	
		while(s2[j]!='\0')
		{
			j++;
		}	
		i++;
	}
if(i>j)
{
	printf("S1 is greater");
}
else
{
	printf("S2 is greater");
}
}