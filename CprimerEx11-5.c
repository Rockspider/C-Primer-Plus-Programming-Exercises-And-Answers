/*
Design and test a function that searches the string specified by the first function
parameter for the first occurrence of a character specified by the second function
parameter. Have the function return a pointer to the character if successful, and a null
if the character is not found in the string. (This duplicates the way that the library
strchr() function works.) Test the function in a complete program that uses a loop to
provide input values for feeding to the function.
*/

#include <stdio.h>
#define LEN	30
char * string(char * s, int l);
char * search(char * s,int n, char c);
int main(void){
	char sentence[LEN];
	char * s = string(sentence,LEN);	
	char * result = search(s,LEN,'c');
	if(result != NULL)
		printf("%s","char was found in the sentence");
	else
		printf("%s","char was not found in the sentence");
}

char * string(char * s, int l){
	fgets(s,l,stdin);	
	return s;
}

char * search(char * s,int n, char c){
	char ch;
	for (int i=0;i<n;i++){
		ch = *(s+i);
		if(c == ch){
			return (s+i);
		}
		else
			continue;
	}
	return NULL;
}
