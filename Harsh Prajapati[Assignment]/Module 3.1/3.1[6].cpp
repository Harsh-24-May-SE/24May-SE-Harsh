// Convert years into days and days into years

#include<stdio.h>
main()
{
	int days,year;
	
	printf("Enter No. of Years :");
	scanf("%d",&year);
	
	days=year*365;
	printf("\nNo. of Days = %d",days);
	
	year=days/365;
	printf("\n\nNo. Of Years = %d",year);	
}
