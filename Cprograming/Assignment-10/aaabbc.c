void main()
{
	char s1[10];
printf(" The String :-");
	scanf("%s",s1);
	
	
	int i=0;
	while(s1[i]!='\0')
	{ int count=1;
	   char ch=s1[i];
	 while(s1[i]==s1[i+1])
	 {
	 	count++;
	 	i++;
	 }
	 	printf("%c %d",ch,count);
	 	i++;
	}
	

	
}