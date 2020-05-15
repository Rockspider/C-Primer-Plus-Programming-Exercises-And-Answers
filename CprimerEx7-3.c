//Write a program that reads integers until 0 is entered. After input terminates, the
//program should report the total number of even integers (excluding the 0) entered, the
//average value of the even integers, the total number of odd integers entered, and the
//average value of the odd integers.


#include <stdio.h>
void * even_or_odd(int * n);
int main(void){
	int n=0;
	printf("%s\n","Enter a num");
	scanf("%d",&n);	
	even_or_odd(&n);
}

void * even_or_odd(int * n){
	int valeven=0,valodd=0,cnteven=0,cntodd=0;
	while(*n!=0){
	if ((*n%2)==0){
		valeven+=*n;	cnteven++;
		}
	else{
		valodd+=*n; cntodd++;
		}
	printf("%s\n","Enter a num");
	scanf("%d",n);
	}
	
	printf("eventotal = %d, evenavg: %d\n",valeven,valeven/cnteven);
	printf("oddtotal: %d, oddavg: %d\n",valodd,valodd/cntodd);
}
