/*
Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLAbased
function to copy it to a second two-dimensional array. Also provide a VLA-based
function to display the contents of the two arrays. The two functions should be capable,
in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable
compiler, use the traditional C approach of functions that can process an N×5 array).
*/
	
#include <stdio.h>
int n = 3, m= 5;
double s_tArray(double (*s)[m], double (*t)[m]);

int main(void){
	double sArray[n][m];
	double tArray[n][m];
	printf("%s\n","Enter n arrays and m elements each in an array");
	for(int i=0;i<n;i++){
		printf("Array %d ",i);
		for (int j=0;j<m;j++){
			scanf("%lf",&sArray[i][j]);
		}	
	}
	s_tArray(sArray,tArray);
	
}

double s_tArray(double (*s)[m], double (*t)[m]){
	
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			*(*(t +i)+j)=*(*(s +i)+j);
			printf("%.2lf ",t[i][j]);
		}	
	}
	
}
	
