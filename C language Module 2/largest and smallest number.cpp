#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nEnter the number n1");
	scanf("%d",&a);
	printf("\nEnter the number n2");
	scanf("%d",&b);
	printf("\nEnter the number n3");
	scanf("%d",&c);
	
	if(a>=b && a>=c)
	{
		printf("A is greatest number\n");
	}
	else if(b>=a && b>=c)
	{
		printf("B is greatest number\n");
	}
	else
	{
		printf("C is greatest number\n");
	}
	
}
