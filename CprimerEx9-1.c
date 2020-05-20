/*Devise a function called min(x,y) that returns the smaller of two double values. Test
the function with a simple driver.
*/

#include <stdio.h>
double accept_values();
double min(double x,double y);
int main(void){
	
	//2 double values
	double Value1 = accept_values();
	double Value2 = accept_values();
	double minimum = min(Value1,Value2);
	printf("The lower value is %1.2f", minimum);
	
}

double accept_values(){
	
	double dValue;
	printf("%s\n","Please enter a double/float value");
	scanf("%1f",&dValue);
	while (getchar()!='\n')
		continue;
	return dValue;
	
}

double min(double x,double y){
return x<y?x:y;	
}