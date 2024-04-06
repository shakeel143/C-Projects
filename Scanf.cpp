#include<stdio.h>
#include<conio.h>

int main(){
  int number1, number2, sum;
    
    printf("Enter 1st integers: ");
    scanf("%d",&number1);
    
    printf("Enter 2nd integers: ");
    scanf("%d",&number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
