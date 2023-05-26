#include<stdio.h>

void main()
{
	char a='d';
	char *ptr;

	ptr = &a;

	printf("\n Value of a is %c",a);

	printf("\n Value of a %c using pointer",*ptr);

	printf("\n Address of a is %p",&a);

	printf("\n Address of a using pointer is %p",ptr);

	printf("\n Address of ptr is %p",&ptr);
}
