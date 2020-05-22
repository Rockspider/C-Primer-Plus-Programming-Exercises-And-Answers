
/*CALCULATE USING POINTERS INSTEAD OF SUBSCRIPTS
two-dimensional array in a weather program. The program goal is to find the
total rainfall for each year, the average yearly rainfall, and the average rainfall for each month.
To find the total rainfall for a year, you have to add all the data in a given row. To find the
average rainfall for a given month, you have to add all the data in a given column. The twodimensional
array makes it easy to visualize and execute these activities. 
*/

#include <stdio.h>
#define YEARS 5
#define MONTHS 12
void Yearly_Measures(float (*pz)[12]);
void monthly_measures(float (*pt)[12]);
int main(){

float rain[YEARS][MONTHS]= {{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
							{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
							{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
							{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
							{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
							};


Yearly_Measures(rain);
monthly_measures(rain);

}

void Yearly_Measures(float (*pz)[12]){		
for(int i=0;i<5;i++){
	float total=0.00,Avg =0.00;
	for(int j=0;j<12;j++){
		
		total = total + *(pz[i]+j);
			
	}
	Avg = total/12;
	printf("Year %d = Total Rainfall: %.2f\t\tAverage Rainfall:%.2f\n",i,total,Avg);
	}	
}

void monthly_measures(float (*pt)[12]){
	puts("Average Monthly Rainfall");
	for (int i=0;i<12;i++){
		float total=0.00,avg=0.00;
		for(int j=0;j<5;j++){
		 total = total + *(pt[j]+i);
		}
		avg = total/5;
		
		printf("M(%d): %1f\n",i,avg);
	}
	
}
