#include<stdio.h>

int main(){
	int num1;

	int num2;

	printf("Enter the num1:");
	scanf("%d", &num1);

	printf("enter the num2=");
	scanf("%d",&num2);

	if(num1 < num2){ 
		printf("num1 is smaller than num2");
	}
   	
	else if(num1 > num2){
		printf("num1 is greater than num2");
	}
	
	else{
		printf("failed ");
	}


	return 0;
}
