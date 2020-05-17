/*Modify assumption a. in exercise 7 so that the program presents a menu of pay rates
from which to choose. Use a switch to select the pay rate. The beginning of a run
should look something like this:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr 2) $9.33/hr
3) $10.00/hr 4) $11.20/hr
5) quit
*****************************************************************
If choices 1 through 4 are selected, the program should request the hours worked. The
program should recycle until 5 is entered. If something other than choices 1 through 5
is entered, the program should remind the user what the proper choices are and
*/

#include <stdio.h>

#define NORMAL		 normal
#define OVERTIME	 NORMAL/2
#define REGULAR_PAY  40*NORMAL
#define BASE_TAX	(gross_pay-300)
#define SLAB1		.15
#define SLAB2		.20
#define SLAB3		.25

int gross_pay=0;
float normal = 0.00;
int gross_pay_calc(int time_worked);
int tax_calc(int time_worked);
int main(void){
		int time_worked=0,gross_pay,taxes_paid,net_pay,choice;
		for(int i=0;i<60;i++){printf("%s","*");}
		printf("\n");
		puts("Enter the number corresponding to the desired pay rate or action:");
		printf("%s		%s\n","1) $8.75/hr","2) $9.33/hr");
		printf("%s		%s\n","3) $10.00/hr","4) $11.20/hr");
		printf("%s\n","5) quit");
		for(int i=0;i<60;i++){printf("%s","*");}
		printf("\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: normal=8.75;break;
			case 2: normal=9.33;break;
			case 3: normal=10.00;break;
			case 4: normal=11.20;break;
			case 5: default: puts("You choose to quit");return 0;				
		}
		
		printf("%s\n","Hours worked in a week");	
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
