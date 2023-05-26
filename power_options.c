#include<stdio.h>

double square (int n)
{
	return n*n;
}

double cube (int n)
{
	return n*n*n;
}

double power_of_4 (int n)
{
	return n*n*n*n;
}

double power_of_5 (int n)
{
	return n*n*n*n*n;
}

void main()
{
	int n, choice;
	double res;

	printf("\n Enter the value of n :");
	scanf("%d",&n);

	printf("\n Enter \n 1 for n^2 \n 2 for n^3 \n 3 for n^4 \n 4 for n^5 \n :");
	scanf("%d",&choice);

	if(choice == 1)
	{
		res = square(n);
	}
	else if(choice == 2)
	{
		res = cube(n);
	}
	else if(choice == 3)
	{
		res = power_of_4(n);
	}
	else if(choice == 4)
	{
		res = power_of_5(n);
	}
	else
	{
		printf("\n U have entered wrong choice!");
		return;
	}
	
	printf("\n The result is %lf",res);



}
