//Write a program that reads input up to # and reports the number of times that the
//sequence ei occurs.

#include <stdio.h>

int main(void){
	
	char ch;
	int count=0;
	int found=0;
	while ((ch=getchar())!= '#'){
		if(ch=='e'){
			 found = 1;
			}
		if (ch == 'i' && found == 1){
			count++;
			found = 0;
		}
		
	}
	printf("There is %d 'ei' in the sequence.",count);
}
