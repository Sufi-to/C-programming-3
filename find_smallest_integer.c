#include<stdio.h>

int min(int, int);

int main(void){
    
    int l;
    scanf("%d", &l);
    
    int j;
    int num[l];
    int temp,i;
    int small= 0;
    
    for(j=0; j<l; j++){
        scanf("%d", &num[j]);
    }
    int num0= num[0];
    int num1= num[1];
    if (num0< num1){
        temp = num0; 
    }else{
        temp = num1;
    }
    for(i=2; i<l;i++){
        small = min(temp, num[i]);
        if (small<temp){
            temp = small;
        }
    }
    
    printf("%d", small);
   
}
int min(int x, int y){
    if (x<y){
        return x;
    }else{
        return y;
    }
}