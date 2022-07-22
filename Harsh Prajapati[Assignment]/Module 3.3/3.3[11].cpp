// WAP to show difference between Structure and Union.

#include<stdio.h>

struct student
{
	int id;
	char name[20];
	float height;
};

union car
{
	int c_id;
	char c_name[20];
	float weight;
};

main()
{
	struct student s1;
	union car c1;
	
	printf("Size Of Structure :%d",sizeof(s1)); //Size: int(4byte)+char(name=[20])+float(4byte)
	printf("\nSize Of Union :%d",sizeof(c1)); //Size: the ONE which has biggest data size
}
