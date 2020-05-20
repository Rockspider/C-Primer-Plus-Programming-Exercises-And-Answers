/*Write a function that takes three arguments: a character and two integers. The character
is to be printed. The first integer specifies the number of times that the character is to
be printed on a line, and the second integer specifies the number of lines that are to be
printed. Write a program that makes use of this function.
*/
#include <stdio.h>
void chline(char ch,int i,int j);
int main(void){
	char ch;
	int i,j;
	chline(ch,i,j);
	
}

void chline(char ch,int i,int j){
	puts("Enter character and 2 numbers");
	scanf("%c %d %d",&ch,&i,&j);
	
	for(int k=0;k<i;k++){
		for(int l=0;l<j;l++){
		printf("%c",ch);	
		}
		printf("\n");
	}
		
	
	
	
	
	
	
}