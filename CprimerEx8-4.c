/*Write a program that reads input as a stream of characters until encountering EOF . Have
it report the average number of letters per word. Don’t count whitespace as being letters
in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that
now. (If you do want to worry about it, consider using the ispunct() function from the
ctype.h family.)
*/


#include <stdio.h>
#include <ctype.h>

int main(void){
	
float wcount=0;float ccount=0;
char ch;
float avg=0.00;

while ((ch=getchar())!=EOF){	
	if ((ch == ' ')||(ch=='\n')||(ch==EOF))
		wcount++;
	else if((ch > 32) && (ch < 47))
		continue;
	else
		ccount++;
		
}

avg = ccount/wcount;

printf("ccount: %.0f, wcount= %.0f, avg= %.2f",ccount, wcount, avg);

}