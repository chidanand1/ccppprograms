#include<stdio.h>

int main(){
	int num1;

	printf("enter the num1 :");
	scanf("%d",&num1);

	if(num1%2==0){
	printf("%d even number", num1);
	}
	else {
		printf("%d odd number", num1);
	}
	return 0;
}
