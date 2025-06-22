#include<stdio.h>
void Storearr(int* ,int );
void displayarr(int* ,int );
void replace(int* ,int,int,int);
void After(int *,int);
int  main()
 {
	int arr[10];
	printf("Enter Elements:");
	Storearr(arr,10);
	displayarr(arr,10);
	replace(arr,10,7,5);
	After(arr,10);
}
void Storearr(int* arr,int size)
 {	
	for(int i=0; i<size; i++)
	 {
		scanf("%d",&arr[i]);
	}
}

void displayarr(int* arr,int size) {
	for(int i=0; i<size; i++) {
		printf(" %d",arr[i]);
	}
}
void  replace(int* arr,int size,int old,int new) 
{
	for(int i=0; i<size; i++)
	 {
		if(arr[i]==old)
		 {
			arr[i]=new;
		}

	}
}

	void After(int* arr,int size) 
	{
		for(int i=0;i<size;i++) 
		{
			printf("\n After swap %d",arr[i]);
		}
	}


