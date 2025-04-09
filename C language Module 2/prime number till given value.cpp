#include<stdio.h>
main()
{
	//for prime number
	int i,n,count=0 ;
	printf("Enter any number");// user input
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)// suppose n=5 then loop will run 5 times
	{ 
		if(n%i==0)
		{
			count++; // for n=5 count =1
		}
	}
	
	if(count==2)
	{
		printf("\n The given number is a prime number");
	}
	else 
	{
		printf("\n The given number is not a prime number ");
	}
	
}
