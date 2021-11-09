#include <stdio.h>
#include "NumClass.h"

int main(){
int number1;
int number2;
/* Two positive numbers : */
scanf("%d", &number1);
scanf("%d", &number2);

int theMax, theMin;
if(number1 > number2){
theMax = number1;
theMin = number2;
}
else {
theMax = number2;
theMin = number1; 
}
printf("The Armstrong Numbers are: ");
for(int i = theMin; i <= theMax; i++){
    if(isArmstrong(i)==1){
       printf(" %d", i);
    }
}
printf("\n"); 
printf("The Palindrome Numbers are: ");
for(int i = theMin; i <= theMax; i++){
    if(isPalindrome(i)==1){
        printf(" %d", i);
    }
}
printf("\n");
printf("The Prime Numbers are: ");
for(int i = theMin; i <= theMax; i++){
    if(isPrime(i)==1){
        printf(" %d", i);
    }
}
printf("\n");  
printf("The Strong Numbers are: ");
for(int i = theMin; i <= theMax; i++){
    if(isStrong(i)==1){
        printf(" %d", i);
    }
}
printf("\n");
return 0;
}