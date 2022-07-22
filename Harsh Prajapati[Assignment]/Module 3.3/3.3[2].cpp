// Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
main()
{
	int calc,a,b;
	
	printf("Enter Two Number :");
	scanf("%d %d",&a,&b);
	
	printf("\n>>Enter Choice To Operate Program :");
	printf("\n1.Addition");
	printf("\n2.Substraction");
	printf("\n3.Multiplication");
	printf("\n4.Division\n");
	scanf("%d",&calc);
	
	switch(calc)
	{
		case 1:
			printf("\nAddtion = %d",a+b);
			break;
			
		case 2:
			printf("\nSubstraction = %d",a-b);
			break;
			
		case 3:
			printf("\nMultiplication = %d",a*b);
			break;
			
		case 4:
			printf("\nDivision = %d",a/b);
			break;
			
		default:
			printf("\nInvalid Choice!!!");
	}
}
