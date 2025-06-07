void main()
{
	int no;
	printf(" Enter number ");
	  scanf(" %d",&no);
	  
	  if( no%3==0 && no%5==0)
	  printf(" The number");
	  else if(no%5==0)
           printf(" The number is divided by 5 but not  by 3");
	   else if(no%3==0)
		   printf(" The number is divided by 3 but not by 5  ");	
		   else
		   printf(" Not divided by both 5 and 3",);
}