//Using SWITCH STATEMENTS, write a program that reads input up to # , replaces each period
//with an exclamation mark, replaces each exclamation mark initially present with two
//exclamation marks, and reports at the end the number of substitutions it has made.


#include <stdio.h>
void replace(char s);

int main(void){
	char ch;int count=0;
	while((ch=getchar())!='#'){
		switch(ch)
		{
			case '.':
				replace(ch);
				count++;
				continue;
				break;
			case '!':
				replace(ch);
				count++;
				break;
			default:
				break;
			}
		printf("%c",ch);
		}
	
	printf("there are %d replacements made", count);
	
}

void replace(char s){
		printf("%c",'!');
}
