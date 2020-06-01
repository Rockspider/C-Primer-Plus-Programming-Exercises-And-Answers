/*
Write a function that takes a string as an argument and removes the spaces from the
string. Test it in a program that uses a loop to read lines until you enter an empty line.
The program should apply the function to each input string and display the result.
*/

#include <stdio.h>
void remove_spaces(char * s);
void take_input(char * s,int len);
int main(void){
	char s[30];
	char next='Y';char ch;	
	take_input(s,30);
	while(next == 'Y')
	{		
		printf("%s","continue?");
		scanf("%c",&next);
		if((ch=getchar())!='\n')
			continue;
		if(next == 'Y')
			take_input(s,30);
	}
}

void take_input(char * s,int len)
{	
	printf("%s\n","Enter the string you want to remove spaces from");
	fgets(s,len,stdin);	
	remove_spaces(s);
}

void remove_spaces(char * s)
{
	while(*s!='\0'){
		if(*s==' ')
			*s=*++s;
			printf("%c",*s);
		s++;
	}
}
