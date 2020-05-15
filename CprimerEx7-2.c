//Write a program that reads input until encountering # . Have the program print each
//input character and its ASCII decimal code. Print eight character-code pairs per line.
//Suggestion: Use a character count and the modulus operator ( % ) to print a newline
//character for every eight cycles of the loop.
#include <stdio.h>

int main(void){
	char ch;
	int count;
	puts("Enter a character");
	puts("To stop enter #");
	
	while((ch=getchar())!='#'){
		if(count%8==0)
				puts("\n");
		if (ch=='\n')
			continue;
		else
			printf("%c-%d\n",ch,ch);
		count++;
	}	

}
