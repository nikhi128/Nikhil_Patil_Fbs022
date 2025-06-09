#include<stdio.h>
int main() {
	int num;
	printf(" Enter number :-");
	scanf("%d",&num);
	if(num%1==0 && !(num%2==0))
	printf(" The number is prime: %d",num);
	else
		printf(" The number is not prime");

	}