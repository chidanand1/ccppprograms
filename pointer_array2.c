#include<stdio.h>

void main()
{
	int i, arr[10];
	int*p;
	
	p = arr;

	for(i=0;i<10;i++)
	{
		printf("\n Enter the value of arr[%d] :",i);
		scanf("%d",p);
		p++;
	}
	
	for(i=0;i<10;i++)
	{ 
		printf("\n Array [%d] is %d",i,arr[i]);
	}

}
