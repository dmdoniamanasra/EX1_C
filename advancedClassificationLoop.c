    #include <stdio.h>
    #include <math.h>
    #include "NumClass.h"
    #define true 1
    #define false 0


            int isPalindrome (int num) 
            {
                if(num <= 9)
                {
                    return true;
                }
            int temp = num;
            int reverse = 0, remainder; 
            while(temp != 0){
                remainder = temp % 10;
                reverse = (reverse * 10) + remainder; 
                temp = temp / 10;
            }
            if(reverse == num){
                return true;
            } 
            return false;
            }

        int order(int num){
            int x = 0;
            while (num>0){
                x++;
                num = num / 10;
            }
            return x;
        }
            int isArmstrong(int num)
            {
                int n = order(num);
                int temp = num, sum = 0;
                while(temp > 0){
                    int r = temp % 10;
                    sum += pow(r , n);
                    temp = temp / 10;
                }
                if(sum == num)
                return  true; 
                else
                return false;
            }