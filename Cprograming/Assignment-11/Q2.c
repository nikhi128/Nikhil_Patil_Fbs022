void main()
{
	char s1[100];
	char ch='a';
	printf(" \nEnter string :");
	scanf("%s",s1);
	
	int i=0;
	while(s1[i]!='\0'&&s1[i]!=' ')
	{ 
	
	   
		if(s1[i]==ch)
		{
			s1[i]='$';
		}
		i++;
	}
	printf("After Replace %s",s1);
}