//Design and test a function that fetches the next n characters from input (including
//blanks, tabs, and newlines), storing the results in an array whose address is passed as an argument.

#include <stdio.h>
#define LEN 20
void prArray(char * Arr, int * n);
int main(void){
	int num=0;	
	char sArray[LEN];
	printf("%s\n","How many characters do you want to print");
	scanf("%d",&num);
	printf("%s\n","Go Ahead! write what you want");
	prArray(sArray,&num);
	puts("\n");
	puts ("Array completed");
		
}

void prArray(char * Arr, int * n){
	char ch;
	int count=0;
	while ((ch=getchar())!= EOF){
		if (count <= *n)
			*(Arr + count) = ch;		
		count++;
	}
	printf("%s\n",Arr);
}
