//Write a program that accepts a positive integer as input and then displays all the prime
//numbers smaller than or equal to that number.

#include <stdio.h>
int is_prime(int i,int num);
int main(void){
	
	int number=0,result=0;
	while(number <=0){
	printf("%s\n","Enter a +ve number");
	scanf("%d",&number);
	}
	printf("%s\n","The prime numbers are: ");
	for (int i=2;i<=number;i++){		
		result = is_prime(i,number);
		if(result==0)
			continue;		
		printf("%d ",result);
	}
	
}

int is_prime(int i,int num){
for(int j=2;j<i;j++){			
		if ((i%j)==0)
			break;
		else
			return i;
		}
}
