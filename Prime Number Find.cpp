#include<stdio.h>
#include<conio.h>

int main(){
	
	int nums[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int array_size = sizeof(nums)/sizeof(int);
	float formula;
	
	for(int a=0;a<array_size;a++){
		
		
		formula=nums[a]/nums[a];
		printf("\n%f",formula);
		
		
		
	/*	
		formula=6*nums[a]+1;
		printf("\n \n %d",formula);
		
		*/
		
	}
	
	
	
	
}
