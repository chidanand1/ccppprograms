#include<stdio.h>

int main(){

	int Num1;

	int Num2;
	

	printf("Enter the Num1 :");
	scanf("%d", &Num1);


	printf("Enter the Num2 :");
	scanf("%d", &Num2);

	if(Num1 < Num2){

		printf("\n Num1 is less than Num2");
	}
	else if (Num1>Num2){
		printf("\n Num1 is greater than Num2");
	}

	else if(Num1==Num2){
		printf("\n Num1 equal to Num2");
	}

	else{
		printf("\n statement all false");
	}
	


	return 0;
}
