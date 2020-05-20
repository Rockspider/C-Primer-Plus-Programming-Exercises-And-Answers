/*Write and test a dunction that takes the addresses od three double variables as arguments
and that moves the value od the smallest variable doubleo the dirst variable, the middle value
to the second variable, and the largest value doubleo the third variable.
*/

#include <stdio.h>
void compare(double * x, double * y, double * z);
double main(void){
	
	double a=0.00,b=0.00,c=0.00;
	printf("%s\n","Enter three variables");
	scanf("%lf %lf %lf",&a,&b,&c);
	compare(&a,&b,&c);
	
}
	
void compare(double * x, double * y, double * z){
	double l=0.00,m=0.00,h=0.00;
	
	double a = *x > *y?*x : *y;
	double b = *x > *z?*x : *z;
	double c = *y > *z?*y : *z;
	
	if ((a==*x) && (b == *x)){
		if (c==*y)
			l=*z,m=*y,h=*x;
		else
			l=*y,m=*z,h=*x;
	}
	else if ((a==*y) && (b==*z)){
		if (c==*y)
			l=*x,m=*z,h=*y;
		else
			l=*x,m=*y,h=*z;
	}
	else if ((a==*x) && (b==*z))
			l=*y,m=*x,h=*z;
			
	else
		puts("cant decide");
	
	printf("%.2f,%.2f,%.2f",l,m,h);
}
	
	
	
	
	
