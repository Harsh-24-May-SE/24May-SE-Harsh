// Program to make addition, Subtraction, Multiplication and Division of Two Numbers

#include<stdio.h>

main()

{
	int a,b;
	
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	
	printf("Enter 2st Number : ");
	scanf("%d",&b);
	
	printf("\nAddition = %d",a+b);
	printf("\nSubstraction = %d",a-b);
	printf("\nMultiplication = %d",a*b);
	printf("\nDivision = %d",a/b);
	printf("\nModulo = %d",a%b);
}
