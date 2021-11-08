#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isArmstrong(int a){
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
        Verifier+=pow(temp,Length);
    }
    if(Verifier!=a){
        return 0;
    }

    return 1;
}

int isPalindrome(int a){
    int temp1=a,temp2=a,Length=0;
    while(temp2!=0){
        temp2/=10;
        Length++;
    }
    int temp3=Length/2;
    int f=0,l=0;
    for(int i=1;i<=temp3;i++){
        f=temp1/pow(10,Length-1);
        l=temp1%10;
        temp1=temp1-(f*pow(10,Length-1));
        temp1=temp1/10;
        Length=Length-2;
        if(f!=l){
             return 0;
        }
    }
    return 1;
}

