#include<stdio.h>
main()
{
	int a;
	printf("Enter any value of A");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("The given number is EVEN number\n");
	}
	else
	{
		printf("\nThe given number is ODD number");
	}
	
	
	int c;
	printf("Enter any value");
	scanf("%d",&c);
	
	if(c>=0)
	{
		printf("\n The given number is positive number");
	}
	else
	{
		printf("\The given number is negative number");
	}
	
	int b;
	printf("\nEnter any number as per your choice");
	scanf("%d", &b);
	
	if(b%3==0)
	{
		printf("\nThe number is the muliple of 3");
	}
	else if (b%5==0)
	{
		printf("\nThe number id multiple of 5");
	}
	else
	{
		 printf("\n The number is not the multiple of 3 nor 5");
	}
}
