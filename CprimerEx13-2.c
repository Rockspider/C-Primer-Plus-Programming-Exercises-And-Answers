/*
Write a file-copy program that takes the original filename and the copy file from the
command line. Use standard I/O and the binary mode, if possible.
*/


#include <stdio.h>

int main(int argc, char ** argv){
	
	if(argc<3){
		printf("Usage: %s file1 file2",argv[0]);
		return 1;
	}
	
	FILE *fp,*ft;
	fp = fopen(argv[1],"rb");
	ft = fopen(argv[2],"wb");
	char ch;
	while ((ch = fgetc(fp))!=EOF)
	{
		fputc(ch,ft);
	}
	fclose(fp);
	fclose(ft);
	
	
}
