#include<stdio.h>
struct studinfo
{
	char name[10];
	int id;	
}vp; // object way 1
main()
{
	//studinfo st;  object declaration way2
	printf("Enter an ID:");
	scanf("%d",& vp.id);
	printf("Enter an name:");
	scanf("%s",& vp.name);
	
	printf("\n ID:%d",vp.id);
	printf("\n Name:%s",vp.name);
			
}
