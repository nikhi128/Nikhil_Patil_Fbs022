int evenodd();
double calculateSalary();
void main()
{
	int choice;
	printf("Enter 1 for evenodd \n2 for total salary");
	scanf("%d",&choice);
	if(choice==1)
	{
//		int res=evenodd();
		if(evenodd())
			printf("even");
		else
			printf("odd");
	}
	else if(choice==2)
	{
		double tsal=calculateSalary();
		printf("Total salary is %lf",tsal);
	}
	else
	{
		printf("invalid choice");
	}
}


int evenodd()
{
	int no;
		printf("Enter a number");
		scanf("%d",&no);
		
		return no%2==0;
//		if(no%2==0)
//			return 1;
//		else
//			return 0;
}

double calculateSalary()
{
	
		double basicsal,da,ta,hra,;
		printf("Enter basic salary");
		scanf("%lf",&basicsal);
		if(basicsal<5000)
		{
			da=basicsal*0.10;
			ta=basicsal*0.15;
			hra=basicsal*0.20;
		}
		else
		{
			da=basicsal*0.15;
			ta=basicsal*0.20;
			hra=basicsal*0.25;
		}
	
		return basicsal+da+ta+hra;;
}