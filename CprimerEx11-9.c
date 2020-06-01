/*
Write a function that replaces the contents of a string with the string reversed. Test the
function in a complete program that uses a loop to provide input values for feeding to
the function.
*/
#include <stdio.h>
void reverse_chars(char * s);
void take_input(char * s,int len);
int main()
{	
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
	printf("%s\n","Enter the string you want to be reversed");
	fgets(s,len,stdin);	
	reverse_chars(s);
}

int count_chars(char * s)
{
	int count = 0;
	
	while(*s != '\0'){		
		count++;
		s++;
	}
	return count;
}

void reverse_chars(char * s)
{
	int num = count_chars(s);
	for(int i=num;i>=0;i--)
	{	
		printf("%c",s[i]);
	}
	printf("\n");
}
