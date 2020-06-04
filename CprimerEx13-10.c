/*Write a program that opens a text file whose name is obtained interactively. Set up a
loop that asks the user to enter a file position. The program then should print the part of
the file starting at that position and proceed to the next newline character. Let negative
or non-numeric input terminate the user-input loop.*/

#include <stdio.h>
#include <stdlib.h>
void get(char * string, int n);
int main(void){
	char f_n[30];FILE *fp;char ch;int pos=0;
	puts("enter the name of the file");
	get(f_n,30);
	fp = fopen(f_n,"r");
	if(fp==NULL)
		puts("file not open");
	puts("enter position to print");
	scanf("%d",&pos);
	fseek(fp,pos,SEEK_SET);
	while(((ch=fgetc(fp))!=EOF)&&ch!='\n')
		putchar(ch);
}

void get(char * string, int n)
{
fgets(string,30,stdin);
while(*string!='\0'){	
	while(*string=='\n'){
		*string='\0';
		break;
	}
	string++;
}
	
}
