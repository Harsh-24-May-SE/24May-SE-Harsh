// Program to check the given year is leap year or not

#include<stdio.h>

main()
{
	int year;
	
	printf("Enter a Year: ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\nThis Is Leap Year");
	}
	else
	{
		printf("\nThis isn't Leap Year'");
	}
}
