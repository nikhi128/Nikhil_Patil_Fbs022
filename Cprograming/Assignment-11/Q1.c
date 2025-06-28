void main()
{
	char s1[100];
	char ch;
	printf(" \nEnter string :");
	scanf("%s",s1);
	printf("\n Enter a character:");
    scanf(" %c",&ch);
	int i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==ch)
		{
			printf(" Character is found '%c' at index %d",s1[i],i);
			break;
		}
		else
		{
			printf("Not Found ");
		}
		i++;
	}
}