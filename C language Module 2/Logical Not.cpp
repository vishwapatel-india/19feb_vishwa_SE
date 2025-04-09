#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the value of X:");
	scanf("%d",&x);
	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	// logical not
	if(!(x>0 && y>0))
	{
		printf("\Both the values are greater than 0");
	}
	else
	{
		printf("\nBoth the values are less than 0");
	}
}
