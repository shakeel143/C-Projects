#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main(){
	
int h,m,s;

printf("Enter Current Time : ");
scanf("%d%d%d", &h,&m,&s);

start:;
	for(h;h<24;h++){
		
		for(m;m<60;m++){
			
			for(s=1;s<60;s++){
				
				system ("CLS");
				printf(" \n\n\n %d : %d : %d : ",h,m,s);
				
				for(double i=1;i<3910000;i++){
					
				}
			}
			s=0;
		}
		m=0;
	}
	h=0;
goto start;
}
