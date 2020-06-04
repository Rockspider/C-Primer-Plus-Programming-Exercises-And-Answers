/*
Write a program that takes two command-line arguments. The first is a string; the
second is the name of a file. The program should then search the file, printing all lines
containing the string. Because this task is line oriented rather than character oriented,
use fgets() instead of getc() . Use the standard C library function strstr() (briefly
described in exercise 7 of Chapter 11 ) to search each line for the string. Assume no lines
are longer than 255 characters.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv)
{

	FILE * fp;
	char lines[255];
	fp = fopen(argv[2],"r");
	if(argc!=3){
		printf("Usage: %s <string> <filename>",argv[0]);
		return 1;
	}
	
	while (fgets(lines,255,fp)!=NULL){
		if(strstr(lines,argv[1])!=NULL)
			fputs(lines,stdout);
	}	
	
	
}
