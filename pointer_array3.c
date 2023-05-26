#include<stdio.h>

void main()
{

	int i,arr[100];
	int*p;

	p = arr;

	for(i=0;i<100;i++)
	{
		printf("\n Enter the array [%d]",i);
		scanf("%d",p);
		p++;
	}

	for(i=0;i<100;i++)
	{
		printf("\n Array [%d] is %d",i,arr[i]);

	}

}
