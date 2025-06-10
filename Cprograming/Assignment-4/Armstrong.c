void main()
{
	int num;
	printf(" Enter the number :");
	scanf("%d",&num);
	int add=0,r1;
	int arm=num;
while(num>0)
{
	r1=num%10;
	add=r1*r1*r1+add;	
	num=num/10;
}
if(arm=add)
printf(" The number is armstrong ");
else
printf("The number is not armstrong");
}