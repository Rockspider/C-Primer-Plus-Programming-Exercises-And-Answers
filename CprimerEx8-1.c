//Devise a program that counts the number of characters in its input up to the end of file.


#include <stdio.h>

int main(){
	
	int count;
	char ch;
	FILE *fp;
	
	fp = fopen("ctuts.txt","r");
	
	while((ch=getc(fp))!=EOF){
		count++;
	}
	printf("There are %d characters",count);
	fclose(fp);
	
	
}
