// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>
main()
{
	char str[100],str1[100],temp;
	int length=0,i;
	
	printf("Enter a String : ");
	gets(str);
	
	strcpy(str1,str);
	
	length = strlen(str);
	
	for(i=0;i!=length/2;i++);
	{
		temp=str[i];
		str[i] = str[length-1-i];
		str[length-1-i] = temp;
	}
	printf("\nReverse String Is : %s",strrev(str));
	
	if(strcmp(str,str1)==0)
	{
		printf("\nString Is Palindrome");
	}
	else
	{
		printf("\nNot Palindrome");
	}
}
