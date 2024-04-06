#include<stdio.h>
#include<conio.h>

int main(){
	
	//Multichar Alphabet
	char alpha[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
	              'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
				  '0','1','2','3','4','5','6','7','8','9',
				  '~','`','!','@','#','$','%','^','&','*','(',')','-','_','=','+','[',']','}','{','|',';',':','""',',','<','.','>','/','?'};
				  //two missing 1st : '' 2nd \
				  
	int size_alpha=sizeof(alpha)/sizeof(char);// finding size of alpha
	
	
	/*
	char pw[20];
	
	printf("Enter Your Password");
	gets(pw);
	
	int pw_size=sizeof(pw)/sizeof(char);// finding size of password
	
	
	*/
	//password
	char pw[]={'.','s','!','9','/'};
	int pw_size=sizeof(pw)/sizeof(char);// finding size of password
//	printf("%d",pw_size);
	
	//New variable to store cracked password
	int crack_pw[pw_size];
	
	for(int a=0;a<pw_size;a++){ 
		printf(" \n");
	
		for(int b=0;b<size_alpha;b++){
			
			if(pw[a]==alpha[b]){
			
				crack_pw[a]=alpha[b];
				
				//printf("\n");
				//printf("%c Matched ",crack_pw[a]);
				
			}
			
		/*	else{
				printf("\n");
				printf("%c Not Matched",crack_pw[a]);
				break;
			}
		*/
		}
			
	}
	printf(" \n\n");
	for(int a=0;a<pw_size;a++){
		printf("%c ",crack_pw[a]);
	}	
	
}
