/*Write a program that reads input as a stream of characters until encountering EOF . Have
the program print each input character and its ASCII decimal value. Note that characters
preceding the space character in the ASCII sequence are nonprinting characters.
Treat them specially. If the nonprinting character is a newline or tab, print \n or \t ,
respectively. Otherwise, use control-character notation. For instance, ASCII 1 is Ctrl+A,
which can be displayed as ^A . Note that the ASCII value for A is the value for Ctrl+A
plus 64. A similar relation holds for the other nonprinting characters. Print 10 pairs per
line, except start a fresh line each time a newline character is encountered. (Note: The
operating system may have special interpretations for some control characters and keep
them from reaching the program.)
*/

#include <stdio.h>

int main(void){
	int count=0;
	char ch;
	char new_ch;
	while((ch=getchar())!=EOF){
		if(count<10){
			if(ch == ' ')
				printf("%s - %d ","space",ch);
			else if (ch == '\n')
				printf("%s - %d ","\\n",ch);
			else if (ch < 32)
				printf("^%c - %d ",ch+64,ch);
			else
				printf("%c-%d ",ch,ch);
		}
		count++;
		if(count == 10){
			puts("\n");
			count = 0;
		}
	}
}