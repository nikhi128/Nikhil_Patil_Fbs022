#include<stdio.h>
int main() {

	int per;
	int price;
	printf(" Enter price of book:");
	scanf("%d",&price);
	printf(" Enter 1 for Student:\n");
	scanf("%d",&per);
        if(per==1)
	 {

		if(price>=500) 
		{
			int dis=price*0.20;
			printf(" The discount price is %d ",price-dis);
		} 
		else if(price<500) 
		{
			int dis=price*0.10;
			printf(" The discount price  is %d",price-dis);
		}
		else
		{
			printf(" no discount");
		}
	}
	else {
		 if(price>=600) {
			int dis=price*0.15;
			printf(" The discount price is %d :",price-dis);
		}

		else {
			printf(" NO discount");
		}

	}

}
	

	
























/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount. */