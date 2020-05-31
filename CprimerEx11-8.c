/*
Write a function called string_in() that takes two string pointers as arguments. If
the second string is contained in the first string, have the function return the address
at which the contained string begins. For instance, string_in("hats", "at") would
return the address of the a in hats . Otherwise, have the function return the null pointer.
Test the function in a complete program that uses a loop to provide input values for
feeding to the function.
*/

#include <stdio.h>
int count_char(char *s);
int find_str(char * str, char * sub_str);
int main(void){

	puts("Enter the string u want be searched");
	char string[30]; 
	fgets(string,30,stdin);
	int count_s = count_char(string);
		
	puts("Enter the substring u want to search");
	char sub_string[30]; 
	fgets(sub_string,30,stdin);
	int count_ss = count_char(sub_string);
	
	int found_str = find_str(string,sub_string);
	
	if(found_str == count_ss)
		printf("%s"," : is the address where substring is found");
	else
		printf("The substring is not found",sub_string);
	return 0;	
}
			
int count_char(char *s)
{
	int i=0;
	while(*(s+i)!='\0'){
		i++;		
	}
	return i;
}

int find_str(char * str_s, char * str_ss)
{
	
	int found = 1;
	while((*str_s!='\0'))
	{
		while(*str_ss == *str_s)
			{	if (found == 1)
					printf("%d",str_s);
				++found;
				++str_ss;
				++str_s;
				if((*str_ss == '\0')||(*str_s=='\n'))
				{
					*str_s='\0';
					break;		
				}					
				if (*str_ss != *str_s)
					return found;
			}
		if(*str_s=='\0')
			return found;
		str_s++;
	}
}
