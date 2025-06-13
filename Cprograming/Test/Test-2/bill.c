#include<stdio.h>
void main()
{
	int units;
	printf(" Enter the units :-");
	scanf("%d",&units);
	
	if(units>=1 && units<=50)
	{
		int t=30;
		int res=units*t;
		printf(" The bill will be %d",res);
		printf(" Your units are %d And per unit chargenis 30",units);
	}
	
else if(units>51 && units<150)
	{
		int t=40;
		int res=units*t;
		printf(" The bill will be %d \n",res);
		printf(" Your units are %d And per unit charges 40",units);
	}
else	if(units>=151)
	{
		int t=50;
		int res=units*t;
		printf(" The bill will be %d 50",res);
		printf(" Your units are %d And per unit charges 50",units);
	}
}