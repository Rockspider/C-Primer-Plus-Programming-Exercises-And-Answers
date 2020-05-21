/*Write and test a Fibonacci() function that uses a loop instead of recursion to calculate
Fibonacci numbers.
*/
//USED AUTHOR'S SOLUTION

#include <stdio.h>
void fibo_seq(int * num);

int main(void){
	
	int number;
	printf("%s","Display fibonacci sequence till what number: ");
	scanf("%d",&number);
	fibo_seq(&number);	
}


void fibo_seq(int * num){
	
	int fibo_num=0;
	int x=0,y=1;
	int counter=0;
	while(fibo_num<*num){
		
		printf("%d\n",fibo_num);
		fibo_num = x+y;
		if(counter%2==0)
			x = fibo_num;
		else
			y = fibo_num;
		counter++;	
		
	}
}