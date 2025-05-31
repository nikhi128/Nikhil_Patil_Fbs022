void main()
{
	
	
	int no=56784;
	
	int r1,r2,r3,r4,r5,q1,q2,q3,q4;
	
	r1=no%10;// 0 sep
	q1=no/10;//2211
	r2=q1%10;//1
	q2=q1/10;//221
	r3=q2%10;//1
	q3=q2/10;//22
	r4=q3%10;//2
	q4=q3/10;
	
	int res=r1+r2+r3+r4+q4;
	printf("%d",res);
	
	
	
}