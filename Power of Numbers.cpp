#include<stdio.h>
#include<conio.h>
#include <math.h>  // Liberary for maths

main( )
{
	
	
	
	int opr;
	printf("Dynamic or Static Program for Calculating the Power of Numbers");
	printf("1 :  Static");
	printf("\n2 :  Dynamic");
	printf("\n\n3 :  Exit");
	printf("Your Choice : \t");
	scanf("%d",&opr);
	
	switch(opr)
	{
	case 1:
		staticc();
		break;
		
	case 2:
	    dyanmic();
	    break;
	    
	case 3:
		exit();
	}
	
}
staticc(){
	//Power of Numbers Static pROGRAm	
	
	int a ;
 a = pow ( 3, 2 ) ; //3^2 it means 3*3 or 3 two times multiplication 9
 printf("%d", a ) ;
	
}

dynamic(){
	
	//Power of No Dynamic Program
	int num,pNo;
	int ans;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	printf("\nEnter Power : ");
	scanf("%d",&pNo);
	


	//formula
	int power;
	 power= pow(num,pNo);
	
	printf("\nPower of %d ^ %d = %d",num,pNo,power);
}
