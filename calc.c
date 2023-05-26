#include<stdio.h>

int main()
{
	char op;
	double first ,second ;

	printf("\n Enter the operator (/,*,-,+): ");
	scanf("%c",&op);

	printf("\nEnter the operands:");
        scanf("%lf %lf",&first,&second);

	switch(op){
	
		case '+':
		printf("%.1lf+ %.1lf =%.1lf",first ,second, first +second);
		break;

		case '-' :
		printf("%.1lf - %.1lf =%.1lf",first,second, first -second);
		break;

		case '*' :
		printf("%.1lf * %.1lf =%.1lf",first,second, first *second);
		break;

		case '/' :
		printf("%.1lf / %.1lf =%.1lf",first,second,first /second);
		break;

		default:
		printf("\n error! operator didn't found");

	}

	return 0;

}
