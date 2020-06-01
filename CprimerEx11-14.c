/*
Write a power-law program that works on a command-line basis. The first command-line
argument should be the type double number to be raised to a certain power, and the
second argument should be the integer power.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){

double b;
int e;	
double power=1;
	
if(argc>2)
{
	b=atof(argv[1]);
	e=atof(argv[2]);
	for (int i=1;i<=e;i++){
		power=power*b;	
	}
	printf("%.2lf",power);	
}

else
	printf("%s", "please enter 2 arguments");

}
