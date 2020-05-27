/*
The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1 , truncating
s2 or padding it with extra null characters as necessary. The target string may not be
null-terminated if the length of s2 is n or more. The function returns s1 . Write your own
version of this function; call it mystrncpy() . Test the function in a complete program
that uses a loop to provide input values for feeding to the function.
*/

#include <stdio.h>
#include <string.h>
#define LEN1 30
#define LEN2 30 + LEN1
char * mystrnappend(char * s2,char * s1,int * n);
char * mystrncopy(char * s2,char * s1, int * n);
int main(){
	int num_of_char=0;
	char ch;
	char s1[LEN2];
	printf("%s","Enter string s1: ");
	fgets(s1,LEN1,stdin);
	char s2[LEN1];
	printf("%s","Enter string s2: ");
	fgets(s2,LEN1,stdin);
	printf("%s\n","how many characters to copy");
	scanf("%d",&num_of_char);
	//char * str=mystrnappend(s2,s1,&num_of_char);	
	//printf("%s\n",str);
	char * cpy= mystrncopy(s2,s1,&num_of_char);
	printf("%s\n",cpy);
	
}

//append s2 to s1
char * mystrnappend(char * s2,char * s1,int * n){
	char ch;
	int count=0;
	for(int i=0;i<LEN1;i++){
		if(s1[i]!='\0')
			count++;
		else
			continue;
	}	
	s1[count]='.';
	++count;
	printf("%c\n",s1[count]);
	for(int i=0;i<*n;i++){		
		ch=s2[i];
		s1[count]=ch;
		++count;	
	}	
	return s1;
}

//copy chars from s2 to s1
char * mystrncopy(char * s2,char * s1, int * n){
	char ch;
	int count=0;
	int i=0;
	while(s1[i]!='\0'){
			++count;
			i++;
		}
	printf("%d",count);
	count-=*n;
	printf("%d",count);
	for(int i=0;i<*n;i++){		
		ch=s2[i];
		s1[count]=ch;
		++count;
	}	
	return s1;
		
}
