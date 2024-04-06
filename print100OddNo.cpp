#include<stdio.h>
#include<conio.h>

int main(){
	
int oddNo=0;
int count=1;

do{
		oddNo++;
	    if(oddNo%2!=0){
		
        printf("%d is Odd \n", oddNo);
        
        count+=1;
}
}
while(count<=100);

printf("%d",count);

}
