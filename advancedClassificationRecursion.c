#include <stdio.h>
#include "NumClass.h"
#include <math.h> 
#define true 1
#define false 0


    int reverse (int num, int temp){
        if(num == 0) return temp; 
        temp = (temp * 10) + (num % 10);
        return reverse (num / 10, temp);
    }
    int isPalindrome(int num){
        int r = reverse(num , 0);
    if(num == r){
        return true;
    }
    return false;
    }
        
     int order (int num){
        int  x = 0;
        while(num > 0){
            x++;
            num = num / 10;
        }
        return x;
    }
int armsRec(int num, int orderofNum){
    int d, s = 0;
    if(num > 0){
        d = num % 10;
        s = (pow(d, orderofNum) + armsRec (num/10, orderofNum));
    }
    return s;
}

int isArmstrong (int num){
     int sum;
    int orderofNum = order(num);
    sum = armsRec(num, orderofNum); 
    if(num == sum) 
    return true;
    else
      return false;
}