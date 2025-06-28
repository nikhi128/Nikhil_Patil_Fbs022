void main()
{
	char s1[]="fbs";
	
	int x=len(s1);
	printf("%d",x);
}
int len(char* s1)
{
	int i=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	//printf("%d",i);
	return i;
}