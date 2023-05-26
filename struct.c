#include<stdio.h>

struct student
{
	int roll_no;
	char name[50];
	int age;
	char div[10];
};

void main()
{
	int i;
	char c1;
	struct student s1,s2;

	printf("\n enter the roll_no of s1 :");
	scanf("%d",&s1.roll_no);

	printf("\n enter the name of s1 :");
	scanf("%s",s1.name);

	printf("\nenter the age of s1 :");
	scanf("%d",&s1.age);

	printf("\n enter the div of s1 :");
	scanf("%s",s1.div);


	printf("\n enter the roll_no of s2 :");
        scanf("%d",&s2.roll_no);

        printf("\n enter the name of s2 :");
        scanf("%s",s2.name);

        printf("\nenter the age of s2 :");
        scanf("%d",&s2.age);

        printf("\n enter the div of s2 :");
        scanf("%s",s2.div);


	printf("\nThe roll_no of s1 is %d",s1.roll_no);
	printf("\n The name of s1 is %s",s1.name);
	printf("\n The age o9f s1 is %d",s1.age);
	printf("\n The div of s1 is %s",s1.div);

	printf("\n\n The roll_no of s2 is %d",s2.roll_no);
	printf("\n The name of s2 is %s",s2.name);
	printf("\n The age of s2 is %d",s2.age);
	printf("\n The div of s2 is %s",s2.div);

}
