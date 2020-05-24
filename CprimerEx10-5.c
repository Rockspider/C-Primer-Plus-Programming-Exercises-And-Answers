//Write a function that returns the difference between the largest and smallest elements of
//an array-of-double . Test the function in a simple program.

#include <stdio.h>
#define SIZE 5
double arrLarge(double * arrTest);
double arrSmall(double * arrTest);
int main(void){
	
	double test_array[SIZE];
	for (int i =0;i< SIZE; i++){
		printf("%s","Enter a num");
		scanf("%lf",&test_array[i]);				
	}
	double large= arrLarge(test_array);
	double small = arrSmall(test_array);
	printf("The difference is %.2f",large-small);
}

double arrLarge(double * arrTest){
	
	double largest = *arrTest;
	for (int i = 0; i < SIZE; i++){
	if(largest < *(arrTest+i))
		largest = *(arrTest + i);
	}
	printf("The largest number: %.2f\n",largest);
	return largest;
}

double arrSmall(double * arrTest){
	
	double smallest = *arrTest;
	for (int i =0;i<SIZE;i++){
		if(smallest > *(arrTest+i))
			smallest = *(arrTest+i);
	}
	
	printf("The smallest number: %.2f\n",smallest);
	return smallest;
}
