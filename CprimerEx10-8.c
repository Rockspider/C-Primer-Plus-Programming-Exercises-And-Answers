/*
Copy the third through fifth elements of a seven-element array into a three-element array. 
*/

#include <stdio.h>
void cpArray(double * s, double * t, int * s_index, int * e_index);
int main(){
	
	double sArray[7]={2,3,5,6,4,7,8};
	double tArray[3];
	int s_num, e_num;
	puts("Enter start Index and end index");
	scanf("%d %d",&s_num,&e_num);
	cpArray(sArray,tArray,&s_num,&e_num);
}

void cpArray(double * s, double * t, int * s_index, int * e_index){
	
	for(int i=*s_index;i<=*e_index;i++){
			*(t+i) = *(s+i);	
			printf("%.2f ",*(t+i));
	}
	
}