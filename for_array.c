#include<stdio.h>

void main(){

	int i,arr[10],key,flag=0;

	printf("\n enter the numbers :");

	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);

	}

	printf("\n\n enter tne key to be searched:");
	scanf("%d",&key);

	for(i=0;i<10;i++)
	{
		if(arr[i]==key)
		
		{printf("\n %d is present in array",key);
		flag=1;
		break;
		}

	}

	if(flag ==0)

	{
	printf("\n %d is not present in array",key);

	}

}
