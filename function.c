#include<stdio.h>

void find_largest(int,int,int,int);

float find_avg(int,int,int,int);

void main(){

	int a,b,c,d;
	float avg;

	printf("\nenter value for a:");
	scanf("%d",&a);
	printf("\nenter value for b:");
	scanf("%d",&b);
	printf("\nenter value for c:");
	scanf("%d",&c);
	printf("\n enter value for d:");
	scanf("%d",&d);

	find_largest(a,b,c,d);
	
	printf("\nenter value for a:");
        scanf("%d",&a);
        printf("\nenter value for b:");
        scanf("%d",&b);
        printf("\nenter value for c:");
        scanf("%d",&c);
        printf("\n enter value for d:");
        scanf("%d",&d);
	
	find_largest(a,b,c,d);
	find_avg(a,b,c,d);

}

void find_largest(int a,int b,int c,int d)

{	if(a>=b && a>=c && a>=d){
	printf("\n a is largest");}
				
	else if(b>=a && b>=c && b>=d){
	printf("\n b is largest");}
	
	else if(c>=a && c>=b && c>=d){
	printf("\n c is largest");}

	else{printf("\n d is largest");
	}
	float find_avg(int a, int b, int c, int d)
{
        float avg;
        avg = ( a + b + c + d)/4;
}	
	return avg;
}
