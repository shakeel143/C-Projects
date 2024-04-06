#include<stdio.h>
#include<conio.h>

int main(){
	
	char data;
	int wordLower;
	
	printf("Enter Any Alphabet Character");
	scanf("%c",&data);
	
	wordLower=(int)(data);
	
	if(wordLower>=97 && wordLower <=122){
		printf("%c is lower case word ",data);
	
	}
	else{
		printf("%c is not lower case word ",data);
	}
	
}
