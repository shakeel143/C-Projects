#include<stdio.h>
#include<conio.h>

int main(){
	
	
	int arr[]={1,2,3,4,5};
	
	
	int array_size = sizeof(arr)/sizeof(int);
	for(int a=0;a<array_size;a++){
		
		
	printf("\n%d",arr[a]);
	//printing address
	//printf("\n%d",&arr[a]);
	
}
}


