#include<stdio.h>

	void main()
	{
		int marks;
		printf(" Enter marks");
		scanf("%d",&marks);
		
		if(marks>=75 && marks<=100)
		 printf(" dis");
		 else if(marks>=65 && marks<75)
		 printf(" firs");
		 else if(marks>=55 && marks<65)
		 printf("second");
		 else if(marks>=40&& marks>50)
		 printf(" pass");
		 else if(marks<100 && marks==0)
		 printf(" out of range");
		 else
		 printf(" fail");
	}
