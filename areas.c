#include<stdio.h>

void main (){

	printf("\nenter 1 for circle ");

	printf("\nenter 2 for sphere");

	printf("\nenter 3 for cylinder");
	
	int shape ;
	printf("\nenter the no. :");
	scanf("%d",&shape);
 		
	if(shape==1||shape==2){

        	int radius;
		float pie =3.14;
		int choice;
        	printf("\nenter the radius :");
        	scanf("%d",&radius);
        	int area;

		printf("\n Please Enter 1 for Area/Surface Area , 2 for Volume, 3 for circumfrence  :");
		scanf("%d", &choice);

		if(choice == 1 )
		{
			if(shape=1){
			
				float area =(pie*radius*radius);
				printf("\n area of circle is %f",area);
			}	
			else{	float area =(4*pie*radius*radius);
				printf("\n area of sphere is %f",area);
			}	
		}
		else if (choice == 2)
		{ 	
			if(shape=1){
				printf("the circle has no volume");
			}
			else{ float area =(4/3*pie*radius*radius*radius);
				printf("\n volume of sphere is %f",area);
			}

		}
		else if(choice == 3)
		{	if(shape=1){
				
			float area = (2*pie*radius);
			printf("circumference of circle is %f",area);
				   }
			else {
				printf("sphere has no circumference");
			}		
	
		}
		else{

			printf("\n\n Wrong Choice \n");
		}
	
	}
	else if (shape==3);
	{
		int radius;
		int height;
		int choice;
		int area;
		float pie =3.14;

		printf("\nenter the radius :");
		scanf("%d",&radius);

		printf("\nenter the height :");
		scanf("%d",&height);

		printf("\n enter 1 for total surface area ,2 for curved surface area");
		scanf("%d",&choice);

		if(choice== 1){
				
			float area =(2*pie*radius*(radius+height));
			printf("total surface area of cylinder is %f",area);
		}
		else{
		   	float area =(2*pie*radius*height);
			printf("curved surface area of cylinder is %f",area);
		}

	}


	  
	}
