/*
Use the character classification functions to prepare an implementation of atoi() ; have
this version return the value of 0 if the input string is not a pure number.
*/

#include<stdio.h>
int my_atoi(char * s);
int count_char(char s[]);
int main(void)
{

	char s[]="236";
	int result = my_atoi(s);
	printf("The integer is : %d",result);
	
	
}

int my_atoi(char * s)
{
	int ans=0,place=1;
	int num = count_char(s);
	for(int i=num-1;i>=0;i--)
	{	
		ans+=(s[i]-'0')*place;
		place*=10;	
		
	}
	return ans;
}

int count_char(char s[]){
	
	int count =0;
	while(*s!='\0'){
		count++;
		s++;
	}
	return count;
}
