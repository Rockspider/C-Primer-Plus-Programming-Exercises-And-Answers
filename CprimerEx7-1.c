//Write a program that reads input until encountering the # character and then reports
//the number of spaces read, the number of newline characters read, and the number of all
//other characters read.

#include <stdio.h>

int main(void){
	int count = 0,sp=0,nl=0;
	char ch;
	while((ch=getchar())!='#'){
		if (ch == ' ')
				sp++;
		else if(ch == '\n')
				nl++;
		else count++;	
	}
	printf("char: %d, space =%d, newline=%d",count,sp,nl);
	
}
