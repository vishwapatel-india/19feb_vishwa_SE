#include<stdio.h>
void add(int a, int b) //without-with
{
	printf("\sum:%d",a+b);
}
main()
{
	int x,y;
	printf(" Enter number-1:");
	scanf("%d",&x);
	printf(" Enter number-2:");
	scanf("%d",&y);
	add(x,y);
}
