/*
Write a program that initializes an array-of- double and then copies the contents of the
array into three other arrays. (All four arrays should be declared in the main program.) To
make the first copy, use a function with array notation. To make the second copy, use a
function with pointer notation and pointer incrementing. Have the first two functions
take as arguments the name of the target array, the name of the source array, and the
number of elements to be copied. Have the third function take as arguments the name
of the target, the name of the source, and a pointer to the element following the last
element of the source. That is, the function calls would look like this, given the following
declarations:
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
double target3[5];
copy_arr(target1, source, 5);
copy_ptr(target2, source, 5);
copy_ptrs(target3, source, source + 5);
*/


#include <stdio.h>
void copy_arr(double source[],double target[],int elem);
void copy_ptr(double * source, double * target, int * elem);
void copy_ptrs(double source[], double target[], double f_source[]);
int main(){
	int num=0;
	double s[5]={1,2,3,4,5};
	double t1[5],t2[5],t3[5];
	copy_arr(s,t1,3);
	puts("\n");
	puts("Pointer function. How many elements to copy?");
	scanf("%d",&num);
	copy_ptr(s,t2,&num);
	puts("\n");
	copy_ptrs(s,t3,s+3);
	return 0;
}


void copy_arr(double source[],double target[],int elem){
	
	for(int i=0;i<(elem+1);i++){
		target[i]=source[i];	
		printf("%.2f ",target[i]);
	}	
}

void copy_ptr(double * source, double * target, int * elem){
	target = source;
	for (int i=0;i< *elem;i++){
		printf("%.2f ",*target++);
	}
	
}

void copy_ptrs(double source[], double target[], double f_source[]){
	double * k;
	int i;
	for(i=0,k=source;k<f_source;i++,k++){
			target[i] = *k;
			printf("%.2f ",target[i]);
	}
		
}
