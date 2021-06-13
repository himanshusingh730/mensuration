#include <stdio.h>
#include "defFunction.h"
int main(){
	int  selector=0;
	printf("\n\nWelcome, PLease selct the type of shape\n");
	printf("you want to do calculations on:\n\n");
	
	printf("Type 1 for 2D shapes\n");
	printf("Type 2 for 3D shapes\n\n");
	
	scanf("%d",&selector);
	if(selector==1){
		twodim();
	}
	else if(selector==2){
		threedim();
	}
	
	return 0;
}
