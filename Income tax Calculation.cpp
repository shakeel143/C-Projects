#include<stdio.h>
#include<conio.h>

int main(){
	
		
	int income;
	float tax=0;
	
	 printf("Enter Your Income \n");
      scanf("%d",&income);
      
	if(income>=250000 && income <=500000){
		tax += 0.05*(income-250000);
	}
	
	if(income>=500000 && income <=1000000){
		tax += 0.20*(income-500000);
	}
	
	if(income>=1000000){
		tax += 0.30*(income-1000000);
	}
	
	printf("Your net income tax to be paid by 26 of this month is %f \n ", tax);

	}
