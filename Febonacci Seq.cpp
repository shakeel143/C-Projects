#include<stdio.h>
#include<conio.h>

int main(){
	



				int nthTerm=5;
				int f0Term=1;
				int f1Term=3;
				
				printf("Nth term : %d", nthTerm);
				printf("\n");
				printf("Initial Condition f0  : %d", f0Term);
				printf("\n");
				printf("Initial Condition f1  : %d", f1Term);
				printf("\n");
				printf("According to formula => Fn=Fn-1+Fn-2 \n\n");
				printf("\n\n");
				printf("Your Febonacci Sequence \n\n");
				
				printf("%d %d",f0Term,f1Term);
				printf("\n");


				//making sequence
				int seq=0;
				for(int i=2;i<nthTerm;++i)//loop starts from 2 because 0 and 1 are already printed    
               {    
                seq=f0Term+f1Term; 
                printf("%d \n",seq);
                // ta1.append(seq+" "); // Printing first term of sequence				
                  //System.out.print(" "+n3);    
                   f0Term=f1Term;    
                  f1Term=seq;    
 }              
      } 
