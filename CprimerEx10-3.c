//Write a function that returns the largest value stored in an array-of- int . Test the function
//in a simple program.

#include <stdio.h>
void find_largest(int * p);
int main(void){
	int test_arr[10]={7,2,8,5,8,9,10,12,6,4};
	find_largest(test_arr);	
}

void find_largest(int * p){
	
	int large = *p;
	for(int j=0;j<10;j++){
		if(*p < *(p + j))
			large = *(p+j);
				
	}
	printf("largest value : %d",large);	
}
