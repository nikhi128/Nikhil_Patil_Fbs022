void main()
{
static	char s1[100];
	printf("Enter ");
	scanf("%[^\n]",s1);
	int i=0;
	while(s1[i]!='\0')
	{     if(s1[i]==' ')
		{
			s1[i]='$';
		}
		i++;
	}
	
	printf("%s",s1);
}