// Program of to find out the Area of Triangle, Rectangle and Circle using If Condition

#include<stdio.h>
main()
{
	int st;
	float c_area,p=3.14,r,t_area,b,h,r_area,l,bt;
	
	printf("------Enter Choice From Below------");
	printf("\n1.Area Of Circle");
	printf("\n2.Area Of Triangle");
	printf("\n3.Area Of Ractangle");
	printf("\n");
	scanf("%d",&st);
	
	switch(st)
	{
		case 1:
			printf("\nEnter Radius Of Circle :");
			scanf("%f",&r);
			c_area=p*r*r;
			printf("\nArea Of Circle = %f",c_area);
			break;
			
		case 2:
			printf("\nEnter Breadth :");
			scanf("%f",&b);
			printf("\nEnter Height :");
			scanf("%f",&h);
			t_area=b*h/2;
			printf("\nArea Of Triangle = %f",t_area);
			break;
			
		case 3:
			printf("\nEnter Length :");
			scanf("%f",&l);
			printf("\nEnter Breadth :");
			scanf("%f",&bt);
			r_area=l*bt;
			printf("\nArea Of Ractangle = %f",r_area);
			break;
			
		default:
			printf("\nChoice Not Valid !!!");
	}
}
