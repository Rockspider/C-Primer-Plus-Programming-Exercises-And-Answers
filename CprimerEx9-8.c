/* shows a power() function
that returned the result of raising a type double number to a positive integer value.
Improve the function so that it correctly handles negative powers. Also, build into the
function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
(It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) Use a loop.
Test the function in a program.
*/


#include <stdio.h>
double power_0(double * base);
double calc_power(double * p, double * b);
int main(void){
	
	double base=0.00,power=0.00;
	puts("Enter the base");
	scanf("%lf",&base);
	puts("Enter the power");
	scanf("%lf",&power);
	if (power == 0){
		double res = power_0(&base);
		if(res==1)
			printf("Any num raised to power 0 is %.0f",res);
	}
	else {		
		double res = calc_power(&power,&base);
		if(power > 0)
			printf("The %.2f th power of base %.2f is: %.0f",power,base,res);
		else
			printf("The %.2f th power of base %.2f is: %.10f",power,base,res);
	}
}

//anything raised to power 0 is 1
double power_0(double * base){
	double result = 1;
	if (*base == 0)
		puts("0 raised to any power is undefined");
	else
		return result;	
}

double calc_power(double * p, double * b){
	double pow = 1;
	if (*p >= 0){
		for(int i=0;i<*p;i++){		
			pow *= *b;
		}
	}
	else
		for(int i=0;i>*p;i--){		
			pow /= *b;
		}
		
	return pow;
	
}
	
