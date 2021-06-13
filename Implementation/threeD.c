#include <stdio.h>
#include "defFunction.h"
void cuboid(){
	float width=0,length=0,hight=0;
	printf("\nWidth : ");
	scanf("%f",&width);
	printf("\nLength : ");
	scanf("%f",&length);
	printf("\nHight : ");
	scanf("%f",&hight);
	width=length*width*hight;
	printf("The Volume of cuboid = %f\n\n",width); 
	decide();
}

void sphere(){
	float radius=0;
	printf("\nRadius of the sphere : ");
	scanf("%f",&radius);
	radius = ((radius*radius*radius*22)/7)*4/3;
	printf("The volume of sphere is = %f\n\n",radius);
	decide();
}

void cylinder(){
	float width=0,length=0;
	printf("\nRadius : ");
	scanf("%f",&width);
	printf("\nHight : ");
	scanf("%f",&length);
	width=length*(width*width*22)/7;
	printf("The volume of cylinder = %f\n\n",width); 
	decide();
}
void threedim(){
	int select =0;
	printf("\nPlease Selct the 3D shape:\n\n");
	printf("press 1 for the cuboid\n");
	printf("press 2 for the sphere\n");
	printf("press 3 for the cylinder\n");
	scanf("%d",&select);
	if(select==1){
		cuboid();
	}
	else if(select ==2){
		sphere();
	}
	else if(select ==3){
		cylinder();
	}
}
