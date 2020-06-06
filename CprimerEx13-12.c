/*Create a text file consisting of 20 rows of 30 integers. The integers should be in the range
0–9 and be separated by spaces. The file is a digital representation of a picture, with
the values 0 through 9 representing increasing levels of darkness. Write a program that
reads the contents of the file into a 20-by-30 array of int s. In a crude approach toward
converting this digital representation to a picture, have the program use the values
in this array to initialize a 20-by-31 array of char s, with a 0 value corresponding to a
space character, a 1 value to the period character, and so on, with each larger number
represented by a character that occupies more space. For example, you might use # to
represent 9. The last character (the 31st) in each row should be a null character, making
it an array of 20 strings. Have the program display the resulting picture (that is, print the
strings) and also store the result in a text file. For example, suppose you start with this
data:
*/ 

#include <stdio.h>
void string_rpr(FILE *fp, FILE *ft);
int main()
{
	FILE *fp,*ft;
	fp = fopen("pic.txt","r");
	ft = fopen("newpic.txt","w");
	if((fp==NULL) || (ft == NULL)){
		printf("could not open file");
	}
	string_rpr(fp,ft);
	fclose(fp);
	fclose(ft);
}

void string_rpr(FILE *fp, FILE *ft)
{
	char ch;	
	while((ch=fgetc(fp))!=EOF)
	{		
		switch(ch)
		{
			case '0': ch=' ';break;
			case '1': ch='*';break;
			case '2': ch='&';break;
			case '3': ch='%';break;
			case '4': ch='^';break;
			case '5': ch='#';break;
			case '6': ch='@';break;
			case '7': ch='$';break;
			case '8': ch='(';break;
			case '9': ch=')';break;
		}
		fputc(ch,ft);
		printf("%c",ch);
	}
	
}
