//Program to Check Palindrome Number in C
//
//What is Palindrome Number?
//
//Answer: Palindrome numbers are those numbers that remain the same even after reversing the order of their digits.

//In C, we can check if a given number is palindrome or not by using two different methods given below:
//
//1. By Reversing and Comparing
//A simple method for this problem is to first reverse all the digits of a given number and then compare the reverse of the number with a given number. If both are the same, then the number is a palindrome.
//

#include <stdio.h>

int main(){

    int rev = 0;
    int number = 121;

    while(number>0){
        int digit = number%10;
        rev = rev*10+digit;

    }

}
