#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf(" Enter three sides of trangle");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1==s2 && s1==s3&& s2==s3)
		printf(" The trangle is equiletral");
	else if(s1==s2||s3==s2 || s1==s3||s3==s1)
		printf(" The trangle is isosceles");
	else
	printf(" Scalen trangle ");
	
	
}