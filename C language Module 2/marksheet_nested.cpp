#include<stdio.h>
main()
{
	int a,b,c,d,x;
	float y;
	printf("Marks obtained in Maths: ");
	scanf("%d",&a);
	printf("\nMarks obtained in Science: ");
	scanf("%d",&b);
	printf("\nMarks obtained in English: ");
	scanf("%d",&c);
	printf("\nMarks obtained in Hindi: ");
	scanf("%d",&d);
	
	if(a>=40 && b>=40 && c>=40 && d>=40)
	{
		x=a+b+c+d;
		printf("\nThe total marks obtained-- %d", x);
		
		y=x*100/400;
		printf("\nPercentage obtained-%f", y);
		
		if(y>=70)
		{
			printf("\nPassed with A+ grade");
		}
		else if(y>=60)
		{
			printf("\nPassed with A grade");
		}
		else if(y>=50)
		{
			printf("\nPassed with B grade");
		}
		else if(y>=40)
		{
			printf("\nPassed with C grade");
		}
	}
	else
	{
		printf("\n SorrY!!! You secured less marks in any particular subject");
	}
}
