/*
Write a function that sets each element in an array to the sum of the corresponding
elements in two other arrays. That is, if array 1 has the values 2 , 4 , 5 , and 8 and array 2
has the values 1 , 0 , 4 , and 6 , the function assigns array 3 the values 3 , 4 , 9 , and 14 . The
function should take three array names and an array size as arguments. Test the function
in a simple program.
*/

#include <stdio.h>
#define SIZE 4
double a_c(double * s1, double * s2, double * t);
int main(void){
	
	double s1[SIZE]={2,4,5,8};
	double s2[SIZE]={1,0,4,6};
	double t[SIZE];
	a_c(s1,s2,t);	
}

double a_c(double * s1, double * s2, double * t){

for (int i=0;i<SIZE;i++){	
		t[i] = *(s1+i) + *(s2+i);
		printf("%.2lf ",t[i]);
	}

}	
	
