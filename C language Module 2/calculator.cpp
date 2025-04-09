#include<stdio.h>
main()
{ 
	float a,b;
	float choice;
	printf("The value of 1 :");
	scanf("%f",&a);
	printf("The value of 2:");
	scanf("%f",&b);
	
	printf("\n 1: Add");
	printf("\n 2: Sub");
	printf("\n 3: Mul");
	printf("\n 4: Div");
	
		printf("\n please select the choice 1,2,3,4");
		scanf("%f",&choice);
		
		if(choice=1)
		{
			printf("\n Addition: %f", a+b);
		}
		else if(choice=2)
		{
			printf("\n sub:%f", a-b);
		}
		else if(choice=3) 
		{
			printf("\n Mul: %f",a*b);
		}
		else if(choice=4)
		{
			printf("\n Div: %f", a/b);
		}
			
	
	
	else
	{
		printf("\n ERROR!!!!!");
	}
	
	
}
