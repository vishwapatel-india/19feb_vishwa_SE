#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the value of X:");
	scanf("%d",&x);
	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	
	//logical operator &&
	if(x>0 && y>0)
	{
		printf("\nThe value of X and Y are positive");
	}
	else
	{
		printf("\nBoth values are negative");
	}
}

