#include<stdio.h>

int main(void){
    
    int nofco;
    scanf("%d", &nofco);
    int num;
    char c;
    int h= 0;
    int total = 0;
    int ri=0;
    int i;
    
    for (i=0; i < nofco; i++){
        scanf("%d %c", &num, &c);
    
        if (c=='i'){
            h = num * 4;
        }else if(c=='d'){
            h = num * 8;
        }else if (c=='c'){
            h = num * 1;
        }else{
            ri=1;
        }
        
        total = total + h;
    }
    if (ri==0){
        printf("%d bytes", total);
    }else{
        printf("invalid tracking code type");
    }
    return 0;
}