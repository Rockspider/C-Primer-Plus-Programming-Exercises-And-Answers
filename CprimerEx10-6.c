//Write a function that reverses the contents of an array of double and test it in a simple program.

#include <stdio.h>
#define SIZE 10
void revArray(double * t);
int main(void){
 double testArray[10];
 printf("%s\n","Enter 10 nums separated by a space");
 for(int i=0;i<SIZE;i++){
	 scanf("%lf",&testArray[i]);
 } 	
	revArray(testArray);
}

void revArray(double * t){
	
	for(int i = SIZE-1;i >= 0;i--){
		printf("%.2f ", *(t+i));		
	}
	
}
