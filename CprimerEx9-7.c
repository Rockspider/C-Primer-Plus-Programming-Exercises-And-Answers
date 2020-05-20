/*Write a program that reads characters from the standard input to end-of-file. For each
character, have the program report whether it is a letter. If it is a letter, also report
its numerical location in the alphabet. For example, c and C would both be letter 3.
Incorporate a function that takes a character as an argument and returns the numerical
location if the character is a letter and that returns –1 otherwise.
*/

#include <stdio.h>
int char_position(char * c);
int main(void){
char ch;int pos=0;
while ((ch=getchar()) != EOF){
		pos = char_position(&ch);
		printf("The position is :%d\n",pos);
		fflush(stdin);
	}
}	
	
int char_position(char * c){
	
	int position = 0;
	if ((*c > 64) && (*c < 91))
		position = *c-65;
	else if ((*c > 96 ) && (*c < 123))
		position = *c-97;
	else
		printf("%s\n","Not a valid character");
	
	return position;
	
}