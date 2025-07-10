struct Employ insert();
 typedef struct Employ
{
	int id;
	char name[20];
	double salary;
}Employ;
void main()
{   
	 Employ s1,s2;
	printf("Enter the details of s1 :");
		s1=insert();
		
	printf("Enter the details of s2:");
		s2=insert();
		
		printf("\nThe details of Employ 1");
		display(s1);
		
			printf("\n The details of Employ 2");
		display(s2);
}
 struct Employ insert()
{   
    struct Employ s1;
	scanf("%d",&s1.id);
	scanf("%s",s1.name);
	scanf("%lf",&s1.salary);
	
	return s1;
}

void display(Employ s1)
{
	printf("\n Id=%d Name=%s salary=%lf",s1.id,s1.name,s1.salary);
}