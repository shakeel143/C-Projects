#include<stdio.h>
#include<conio.h>

int main(){
	
	
 int year, yearMod;
  printf("Enter Year \n");
  scanf("%d",&year);
  
  yearMod=year/4;
  
  if(yearMod%2==0){
  printf("%d is Leap Year \n", year);	
  }	
  else{
  	printf("%d is not Leap Year \n", year);
  }
}
