#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int factorial(int a){
    int sum=1;
    for(int i=1;i<=a;i++){
        sum=sum*i;
    }
    return sum;
}

int isStrong(int a){
    int Length=0, Verifier=0, temp=a;

    //Length
    while(temp!=0){
        temp/=10;
        Length++;
    }

    //Verify that the num is armstrong
    for(int i=1;i<=Length;i++){
        int t=pow(10,i);
        temp=a;
        if(temp%t<(t/10)){
            temp=a-(a%t);
        }
        temp=temp%t;
        while(temp>10){
            temp=temp/(t/10);
        }
        Verifier=Verifier+factorial(temp);
    }
    if(Verifier!=a){
        return 0;
    }

    return 1;
}

