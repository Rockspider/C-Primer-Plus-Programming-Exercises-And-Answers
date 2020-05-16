/*Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:
a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half
c. Tax rate: #15% of the first $300
20% of the next $150
25% of the rest
Use #define constants, and don’t worry if the example does not conform to current
tax law.
*/

#include <stdio.h>

#define NORMAL		 10
#define OVERTIME	 5
#define REGULAR_PAY  40*NORMAL
#define BASE_TAX	(gross_pay-300)
#define SLAB1	.15
#define SLAB2	.20
#define SLAB3	.25

int gross_pay=0;
int gross_pay_calc(int time_worked);
int tax_calc(int time_worked);
int main(void){
		int time_worked=0,gross_pay,taxes_paid,net_pay;
		printf("%s","Hours worked in a week");	
		scanf("%d",&time_worked);
		gross_pay = gross_pay_calc(time_worked);
		taxes_paid = tax_calc(gross_pay);
		net_pay = gross_pay - taxes_paid;		
		printf("Gross Pay: $%d, Taxes Paid: $%d,Net Pay: $%d",gross_pay,taxes_paid,net_pay);
			
}			

int gross_pay_calc(int time_worked){
		
	if(time_worked > 40){
			int overtime_worked = time_worked-40;
			int overtime_pay = overtime_worked * OVERTIME;
			gross_pay = REGULAR_PAY + overtime_pay;
	}
		else
			gross_pay = REGULAR_PAY;
		
	return gross_pay;
}

int tax_calc(int gross_pay){
		int taxes_paid;
		if (BASE_TAX < 0)
			 taxes_paid = SLAB1 * gross_pay;
		else if ((BASE_TAX > 0) && (BASE_TAX <= 150))
			taxes_paid = (SLAB1*300)+ (SLAB2*(BASE_TAX));
		else
			taxes_paid = (SLAB1*300)+(SLAB2*150)+(SLAB3*(gross_pay-450));
		
	return taxes_paid;
}
