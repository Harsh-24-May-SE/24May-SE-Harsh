/*Display This Information using printf
	• Your Name
	• Your Birth date
	• Your Age
	• Your Address
*/
#include<stdio.h>
main()
{
	char name[20],address[20];
	int b_date,age;
	
	printf("Enter Your Name :");
	scanf("%s",&name);
	
	printf("Enter Birth Date :");
	scanf("%d",&b_date);
	
	printf("Enter Age :");
	scanf("%d",&age);
	
	printf("Enter Address :");
	scanf("%s",&address);
	
	printf("\nYour Name = %s",name);
	printf("\nYour Birth Date = %d",b_date);
	printf("\nYour Age = %d",age);
	printf("\nYour Name = %s",address);
}
