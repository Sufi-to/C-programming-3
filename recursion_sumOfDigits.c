int sumOfDigits(int);

#include<stdio.h>

int main (void){
    int num;
    scanf("%d", &num);
    
    printf("%d", sumOfDigits(num));
}

int sumOfDigits(int num){
    int remain;
    
    if (num<10){
        return num;
    }else if(num%10!= 0){
        remain = num% 10;
        num = num - remain;
        return remain + sumOfDigits(num);
    
    }else if(num % 10==0){
        num = num/10;
        return sumOfDigits(num);
    }
    return 0;
}
