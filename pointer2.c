#include<stdio.h>

void main()
{
	float a=34.7;
	float *ptr;

	ptr = &a;

	printf("\n value of a is %f",a);

	printf("\n value of a is %f using pointer",*ptr);

	printf("\n Address of a is %p",&a);

	printf("\n address of a using pointer is %p",ptr);

	printf("\n Address of ptr is %p",&ptr);







}
