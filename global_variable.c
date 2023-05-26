#include<stdio.h>
int a = 100;//global variable 

void fun_1(){
	printf("\n value of a is: %d",a);
	printf("\nhello ");
}
void main(){

	int a = 50;//local variable 
	fun_1();
	printf("\n Value of a is :%d",a);
	
}

