#include<stdio.h>

int main(void){
    
    char c;
    int num;
    int h = 0;
    int kb = 0;

    int mb = 0;
    
    scanf("%c %d" , &c, &num);
    
    if (c=='i'){
        h = num * sizeof(int);
    }else if(c == 's'){
        h =  num * sizeof(short);
    }else if(c=='d'){
        h = num * sizeof(double);
    }else if (c=='c'){
        h = num * sizeof(char);
    }else {
        printf("finish");
    }
    int remain= 0;
    int byre =0;
    if (h< 1000){
       printf("%d B", h);
    }else if (h>=1000 && h<1000000){
       if (h%1000 == 0){
           kb= h/1000;
           printf("%d KB and 0 B", kb);
       }else if(h%1000!=0){
           remain = h%1000;
           kb = h/1000;
           printf("%d KB and %d B", kb, remain);
       }
    
    }else if (h>=1000000 && h<2147483647){
        if (h % 1000000 == 0){
            mb= h/1000000;
            printf("%d MB and 0 KB and 0 B", mb);
            
        }else if(h %1000000 != 0){
            remain = h % 1000000;
            mb= h/1000000;
            if(remain%1000==0){
                kb = remain/1000;
                printf("%d MB and %d KB and 0 B", mb, kb);
            }else if(remain%1000!=0){
                byre = remain % 1000;
                kb = remain/1000;
                printf("%d MB and %d KB and %d B", mb, kb, byre);
            }
        }
    }
    return 0;
} 