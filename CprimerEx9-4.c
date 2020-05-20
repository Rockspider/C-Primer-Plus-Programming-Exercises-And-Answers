/*The harmonic mean of two numbers is obtained by taking the inverses of the two
numbers, averaging them, and taking the inverse of the result. Write a function that
takes two double arguments and returns the harmonic mean of the two numbers.
*/

#include <stdio.h>
double h_mean(double i,double j);
int main(void){
	double i,j;
	double hMean = h_mean(i,j);
	printf("%lf",hMean);
	return 0;
}

double h_mean(double i,double j){
	puts("Enter 2 numbers");
	scanf("%lf %lf",&i,&j);
	double inv_num = (1/i+1/j)/2;
	double inv_result = 1/inv_num;
	return inv_result;
		
}

	