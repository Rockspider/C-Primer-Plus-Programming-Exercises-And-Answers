/*Write a program that reads input until end-of-file and echoes it to the display. Have the
program recognize and implement the following command-line arguments:
-p Print input as is
-u Map input to all uppercase
-l Map input to all lowercase
Also, if there are no command-line arguments, let the program behave as if the –p
argument had been used.
*/

#include <stdio.h>

char check_switch(char * s,FILE * fp);
void as_is(FILE * f);
void c_upper(FILE * f);
void c_lower(FILE * f);

int main(int argc, char **argv){
		FILE *fp;
		fp = fopen("ctuts.txt","r");
		if(argc>1)
		{
			if(argv[1][0]!='-')
				printf("usage: %s [-p | -u | -l]",argv[0]);
			else
				switch(argv[1][1])
				{
					case 'p':as_is(fp);break;
					case 'u':c_upper(fp);break;
					case 'l':c_lower(fp);break;
					default :break;
				}
		}
			
		else
			as_is(fp);
}

void as_is(FILE * f)
{
	char ch;
	while((ch = getc(f))!=EOF)
	{
		printf("%c",ch);		
	}	
}

void c_upper(FILE * f)
{
	char ch;
	while((ch=getc(f))!= EOF)
	{
		if((ch > 96) && (ch < 123))
			printf("%c",ch-32);
		else
			printf("%c",ch);
	}
}

void c_lower(FILE * f)
{
	char ch;
	while((ch=getc(f))!= EOF)
	{
		if((ch > 64) && (ch < 91))
			printf("%c",ch+32);
		else
			printf("%c",ch);
	}
}
