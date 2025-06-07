#include<stdio.h>
void main() {

	int age;
     printf(" Enter the age ");
      scanf(" %d",&age);
	if(age>=0 && age<=12) 
	{
		printf(" child");
	} 
	else if(age>=13 && age<=18)
	
	 {
		printf(" Teenager");
	}

	else if(age<60) {

		printf(" Adult");

	}
else{
	printf(" senior");
}

}


