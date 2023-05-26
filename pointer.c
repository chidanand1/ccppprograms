#include<stdio.h>

int main()
{
	int a;
	int *ptr;

	ptr = &a;
	
	printf("\n Enter the value of a :");
	scanf("%d",&a);

	printf("\n Value of a is %d",a);

	printf("\n Value of a is %d using pointer",*ptr);

	printf("\n Address of a is %p",&a);

	printf("\n Address of a using pointer is %p",ptr);

	printf("\n address of ptr is %p",&ptr);

	return 0;

}
