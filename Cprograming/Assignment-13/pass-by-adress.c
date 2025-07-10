typedef struct Bike{
	
	int id;
	char name[10];
	int year;
}Bike;
void store(Bike* s1);
void display(Bike* s1);
void main()
{
	Bike s1,s2;
	
	store(&s1);
	display(&s1);
	
	store(&s2);
	dispaly(&s2);
}

void store(Bike* s1)
{
	
		printf("Enter the id ,Name ,Year");
		scanf("%d",&s1->id);
		scanf("%s",s1->name);
		scanf("%d",&s1->year);
	
}
void display(Bike* s1)
{
	
		printf("\n Bike-id %d ,Bike-name %s, Bike-year %d",s1->id,s1->name,s1->year);
	}