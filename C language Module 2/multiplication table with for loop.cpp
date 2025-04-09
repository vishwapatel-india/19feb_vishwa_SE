#include<stdio.h>
main()
{
	int i,a; 
	printf("Enter the number of whose table you want:");
	scanf("%d", &a);
	for(i=0;i<=10;i++)
	{ 
		printf("\n %d*%d=%d",a,i,a*i);
	}
}
