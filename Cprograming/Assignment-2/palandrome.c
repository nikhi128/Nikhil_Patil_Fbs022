void main()
{
	int no=151;
	int r1,r2,r3,q1;
	
	r1=no%10;//3
	    q1=no/10;//12
	    r2=q1%10;//2
	    r3=q1/10;//1
	    int rev;
	 
	if(rev=r1*100+r2*10+r3==no)
	{
		printf(" The number is Plandrome %d",no);
		}    
	    else{
	    	
	    	printf(" The number is not Plandrome");
		}
}