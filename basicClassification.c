    #include <stdio.h>
    #include "NumClass.h"
    #define true 1
    #define false 0 


    int isPrime(int num)
    {
    if(num == 1 ) {
        return true; 
    }
    else {
        for(int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                return false; 
            }
        }
    }
    return true;    
    }

    int fac (int f){
        if(f == 0){
            return true;
        } 
        else 
            return fac(f - 1) * f;
    }

    int isStrong(int s)
    {
         int temp = s;
        int sum = 0;
    while(temp > 0)
    {
        int d = temp % 10;
        sum += fac(d);
        temp = temp / 10;
    }
    if (s == sum)
    {
        return true;
    }
    return false;
    }   