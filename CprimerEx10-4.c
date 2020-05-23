//Write a function that returns the index of the largest value stored in an array-of- double .
//Test the function in a simple program.

#include <stdio.h>
void largest_num_index(int * p);
int main(void){
	
	int test_arr[10]={7,2,8,5,8,9,10,12,16,4};
	largest_num_index(test_arr);
		
	
}

void largest_num_index(int * p){
	
	int large = *p;
	int large_index = 0;
	for (int i=0;i<10;i++){
		
		if (*p < *(p + i)){
			large = *(p + i);
			large_index=i;			
		}	
	}
	printf("%d\n",large);
	printf("%d\n",large_index);
	
}