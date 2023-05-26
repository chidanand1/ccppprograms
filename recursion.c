#include<stdio.h>
double factorial(double);

int main()
{
	int t,c;
	printf("\n enter the no whose factorial U want to calclate:");
	scanf("%d",&t);
	
	c = factorial(t);

	printf("factorial = %.0d",c);

	return 0;
}

	double factorial(double t)

{
	if(t == 1)
	{ 
		return 1;
	}

	else
	{
		return t*factorial(t-1);
	}
}
