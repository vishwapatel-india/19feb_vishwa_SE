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
	
		
	int i;
	printf("\n ===Select your fav number and you will get your lucky month of 2025===");
	while(i<=12)
	{
		printf("\n %d", i);
		i++;
	
	}
		printf("\n Select any number from above");
		scanf("%d",&i);

	
	switch(i)
	{
		case 1:
		printf("\n Your lucky month is JANUARY");
		break;
		
		case 2:
		printf("\n Your lucky month is FEBRUARY");
		break;
		
		case 3:
		printf("\n Your lucky month is MARCH");
		break;
		
		case 4:
		printf("\n Your lucky month is APRIL");
		break;
		
		case 5:
		printf("\n Your lucky month is MAY");
		break;
		
		case 6:
		printf("\n Your lucky month is JUNE");
		break;
		
		case 7:
		printf("\n Your lucky month is JULY");
		break;
		
		case 8:
		printf("\n Your lucky month is AUGUST");
		break;
		
		case 9:
		printf("\n Your lucky month is SEPTEMBER");
		break;
		
		case 10:
		printf("\n Your lucky month is OCTOBER");
		break;
		
		case 11:
		printf("\n Your lucky month is NOVEMBER");
		break;
		
		case 12:
		printf("\n Your lucky month is DECEMBER");
		break;
		
		default:
			printf("\n ERROR!!!!!");
			
	}
	
	
}
