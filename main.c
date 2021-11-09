#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main()
{

    int number1,number2;
    scanf("%d %d", &number1,&number2);
    printf("The Armstrong numbers are:");
   for (int i = number1; i <= number2; i++) {
        if (isArmstrong(i)==1){
            printf(" %d",i);
        }

    }
    printf("\nThe Palindromes are:");
    for (int i = number1; i <= number2; i++) {
       

        if(isPalindrome(i) == 1){
            printf(" %d",i); 
        }
     
    }
    printf("\nThe Prime numbers are:");
    for (int i = number1; i <= number2; i++) {
       
        if(isPrime(i)==1) {
            printf(" %d", i);
          
        }
        
    }
    printf("\nThe Strong numbers are:");
    for (int i = number1; i <= number2; i++) {
      
        if(isStrong(i) == 1) {
            printf(" %d", i); 
        }  
    }
     printf("\n");

    return 0;
}