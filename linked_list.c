#include<stdio.h>
#include<stdlib.h>

struct stud
{
	int roll_no;
	struct stud *next;

};

void main ()
{
	int i,a,key ;
	struct stud *head ,*temp ,*temp1,*new;

	head =(struct stud*)malloc(sizeof(struct stud));
	head->next =NULL;

	printf("\n Enter the no. of Nodes in linked list :");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		temp =head;
		while(temp->next !=NULL)
		{
			temp = temp ->next;
		}

		new =(struct stud*)malloc(sizeof(struct stud));
		new->next= NULL;

		printf("\n please enter roll no for new node :");
		scanf("%d",&new->roll_no);

		temp->next = new;
	}

	temp = head->next;
	while(temp != NULL)
	{
		printf("\n Roll no: %d ",temp->roll_no);
		temp = temp->next;

	}
}
