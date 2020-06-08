/*Write a function called transform() that takes four arguments: the name of a source
array containing type double data, the name of a target array of type double , an int
representing the number of array elements, and the name of a function (or, equivalently,
a pointer to a function). The transform() function should apply the indicated function
to each element in the source array, placing the return value in the target array. For
example, the call
transform(source, target, 100, sin);
would set target[0] to sin(source[0]) , and so on, for 10 elements. Test the function
in a program that calls transform() four times, using two functions from the math.h
library and two suitable functions of your own devising as arguments to successive calls
of the transform() function.
*/

#include <stdio.h>
#include <math.h>
double t_f(double x);
void transform(double s[],double t[],int n,double t_f(double));
int main(void)
{
	double source[10]={20,30,40,50,60,70,80,90,100,200};
	double target[10];
	transform(source,target,10,sin);
	transform(source,target,10,cos);
	transform(source,target,10,t_f);
}

double t_f(double x)
{
	return 1/x;
}

void transform(double s[],double t[],int n,double t_f(double))
{
			for(int i=0;i<n;i++)
			{	
				t[i]=t_f(s[i]);
				printf("%.5lf\n",t[i]);
				
			}
	
}
