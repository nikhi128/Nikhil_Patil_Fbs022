void main()
{
	char s1[10];
	printf(" Enter string :-");
	scanf("%s",s1);
	
	int i=0;
     
     while(s1[i]!='\0')
	 {
	 	if(s1[i]>='A'&&s1[i]<='Z')
	 	{
		 
	 		s1[i]=s1[i]+32;
	 	}	
		 
		 	else if(s1[i]>='a'&&s1[i]<='z')
			 {
			 	s1[i]=s1[i];
			 	s1[i]=s1[i]-32;
			 }
			
			 i++;
		  
	 }
	 printf(" \n After Small :-%s",s1);
 }