struct complex insert();
typedef struct complex{
	
	int real;
	int imaginary;
}complex;
void main()
{
	complex s1,s2,s3;
	printf("Enter the details of s1 :");
	s1=insert();
	
	printf(" Display s1");
	void display(s1);
	add(s1,s2);
}
struct complex insert()
{   
    struct complex s1;
	scanf("%d",&s1.real);
	scanf("%d",&s1.imaginary);	
	return s1;
}
void display(complex s1)
{
	printf("\nReal =%d  Imaginary=%d ",s1.imaginary,s1.real);
}

 struct complex(complex s1,complex s2)
 {
 	complex temp;
 	temp.real=s1.imaginary+s2.imaginary;
 	return complex;
 }