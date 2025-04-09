#include<stdio.h>
#include<string.h>
main()
{
	char fnm[10],lnm[10];
	printf("First name:");
	scanf("%s",&fnm);
	printf("\n Last name");
	scanf("%s",&lnm);
	printf("/n First name:%s", fnm);
	printf("/n Last name:%s", lnm);
	printf("\n Full name:%s", strcat(fnm,lnm));
	
	char str[10];
	printf("\nEnter the string value");
	scanf("%s",&str);
	// zu is used to check the length
	printf("\n Length of the string:%zu", strlen(str));
	
}
