void main()
{
	char s1[]="abcd";
	char s2[10];
	
char*  x=mycopy(s1,s2);
printf("%s",x);
}
  int mycopy(char* s1,char* s2)
   {
   	int i=0;
   	while(s1[i]!='\0')
   	{
   		s2[i]=s1[i];
   		i++;
	   }
	   s2[i]='\0';
	   return s2;
   }