#include<stdio.h>
typedef struct emp{
	char name[10];
	int id;
}emp;
struct emp insert();
//display();
void main()
{
	emp arr[5];
	arr[0]=insert();
//	display(demo);
	
}
struct emp insert()
{  
	emp arr[5];
	for(int i=0;i<5;i++)
	{    printf("enter name %s  and id%d  of emp %d",i+1);
		scanf("%s",&arr[i].name);
		scanf("%d",&arr[i].id);
	}
	
	return *arr;
}

