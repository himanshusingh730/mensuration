#include <stdio.h>
#include "defFunction.h"

void decide(){
	int deci=0;
	printf("press 1 to go to main.\n");
	printf("press 2 to exit.\n");
	scanf("%d",&deci);
	if(deci==1)
		main();
	else if(deci==2)
		printf("good bye\n");
}

void rectangle(){
	float width=0,length=0;
	printf("\nWidth : ");
	scanf("%f",&width);
	printf("\nLength : ");
	scanf("%f",&length);
	width=length*width;
	printf("The area of rectangle = %f\n\n",width); 
	decide();
}

void circle(){
	float radius=0;
	printf("\nRadius of the circle : ");
	scanf("%f",&radius);
	radius = (radius*radius*22)/7;
	printf("The area of circle is = %f\n\n",radius);
	decide();
}

void twodim(){
	int select=0;
	printf("\nPlease select the 2D shape:\n\n");
	printf("press 1 for the rectangle\n");
	printf("press 2 for the circle\n");
	scanf("%d",&select);
	if(select==1){
		rectangle();
	}
	else if(select ==2){
		circle();
	}
}
