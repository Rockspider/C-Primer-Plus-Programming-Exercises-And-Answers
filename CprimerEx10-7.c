/* Write a program that initializes a two-dimensional array-of- double and uses one of the
copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a
two-dimensional array is an array of arrays, a one-dimensional copy function can be used
with each subarray.*/

#include <stdio.h>
double s_tArray(double (*s)[10], double (*t)[10], int num);
int main(void){
	
	double sArray[2][10];
	double tArray[2][10];
	printf("%s\n","Enter 2 arrays and 10 elements each in an array");
	for(int i=0;i<2;i++){
		printf("Array %d ",i);
		for (int j=0;j<10;j++){
			scanf("%lf",&sArray[i][j]);
		}	
	}
	s_tArray(sArray,tArray,2);
	
}

double s_tArray(double (*s)[10], double (*t)[10], int num){
	t=s;
	for(int i=0;i<num;i++){
		for (int j=0;j<10;j++){
			printf("%.2f ",t[i][j]);
		}	
	}
	
}