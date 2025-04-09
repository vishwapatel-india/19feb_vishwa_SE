#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	//madam 
	int i,len,temp=0;
	
	printf("Enter the string value:");
	scanf("%s",&str);
	len=strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			temp==1;
		}
	}
		if(temp==0)
		{
			printf("\n String is palindrome");
		}
		else
		{
			printf("\n Sorry! string is non palindromiuc");
		}
		
}
