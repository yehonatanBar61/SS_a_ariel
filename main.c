#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "NumClass.h"

int main()
{
    int num1; 
    int num2;
    scanf("%d %d", &num1, &num2);
    printf("The Armstrong numbers are:");
    for(int i=num1; i<=num2; i++){
    	if(isArmstrong(i)==1){
    		printf(" %d",i);
    	}
    }
    
   printf("\n");
   printf("The Palindromes are:");
   for(int i=num1; i<=num2; i++){
    	if(isPalindrome(i)==1){
    		printf(" %d",i);
    	}
    }
   printf("\n");
   printf("The Prime numbers are:");
   for(int i=num1; i<=num2; i++){
    	if(isPrime(i)==1){
    		printf(" %d",i);
    	}
    }
    
   printf("\n");
   printf("The Strong numbers are:");
   for(int i=num1; i<=num2; i++){
    	if(isStrong(i)==1){
    		printf(" %d",i);
    	}
    }
    printf("\n");
    return 0;
}
