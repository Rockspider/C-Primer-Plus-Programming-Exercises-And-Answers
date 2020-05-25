/*
Write a program that prompts the user to enter three sets of five double numbers each.
(You may assume the user responds correctly and doesn’t enter non-numeric data.) The
program should accomplish all of the following:
a. Store the information in a 3×5 array.
b. Compute the average of each set of five values.
c. Compute the average of all the values.
d. Determine the largest value of the 15 values.
e. Report the results.
Each major task should be handled by a separate function using the traditional C
approach to handling arrays. Accomplish task “b” by using a function that computes
and returns the average of a one-dimensional array; use a loop to call this function three
times. The other tasks should take the entire array as an argument, and the functions
performing tasks “c” and “d” should return the answer to the calling program.
*/

#include <stdio.h>
#define ROWS 3
#define COLS 5
void Avg_Arraywise(double (*s)[COLS]);
double Avg_AllArrays(double (*s)[COLS]);
double largest_value(double (*s)[COLS]);
int main(){
	
	double sArray[ROWS][COLS];
	printf("%s\n","Enter 3 sets of 5 elements each");
	for(int i=0;i<ROWS;i++){
		printf("Array %d ",i);
		for (int j=0;j<COLS;j++){
			scanf("%lf",&sArray[i][j]);
		}	
	}
	Avg_Arraywise(sArray);
	double Avg_all = Avg_AllArrays(sArray);
	printf("The average of all values is %.2lf\n",Avg_all);
	double large = largest_value(sArray);
	printf("The largest among all values is %.2lf\n",large);
}

void Avg_Arraywise(double (*s)[COLS]){
	double total = 0.00,Avg = 0.00;
	for (int i=0;i<ROWS;i++){
		for (int j=0;j<COLS;j++){
			total += *(*(s+i)+j);
		}
		Avg = total/COLS;
		printf("The average of Array %d is %.2lf\n",i,Avg);
	}
	
}

//Compute the average of all the values.

double Avg_AllArrays(double (*s)[COLS]){
	double total = 0.00,Avg = 0.00;
	for (int i=0;i<ROWS;i++){
		for (int j=0;j<COLS;j++){
			total += *(*(s+i)+j);
		}
		
	}
	Avg = total/(ROWS*COLS);	
	return Avg;
}


//Determine the largest value of the 15 values.

double largest_value(double (*s)[COLS]){
	
	double largest = s[0][0];
	for(int i=0;i<ROWS;i++){
		for (int j=0;j<COLS;j++){
			if(largest < *(*(s+i)+j))
				largest = *(*(s+i)+j);
		}
	}
	return largest;
}
