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
	while(num>0){
		printf("%s\n","Go Ahead! write what you want");
		prArray(sArray,&num);
		printf("%s\n","How many characters do you want to print");
		scanf("%d",&num);
	}
	puts("Program completed");
}

void prArray(char * Arr, int * n){
	char ch;
	int count=0;
	while ((ch=getchar())!= '#'){
		if (count <= *n)
			*(Arr + count) = ch;		
		else
			ch = '#';
		count++;
	}
	printf("printing %d characters\n",*n);
	for (int i=0;i<=*n;i++){
	printf("%c",*(Arr+i));
	}
	printf("\n");
}
