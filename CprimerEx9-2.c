//Devise a function chline(ch,i,j) that prints the requested character in columns i
//through j . Test it in a simple driver.\

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
		printf("%c",' ');
	}
	for (int k=i;k<j+1;k++){
		printf("%c",ch);
	}		
}
	
	
	
	
	
