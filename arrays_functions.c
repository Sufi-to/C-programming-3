#include<stdio.h>

void reverseArray(int *);

int main(void){
    int arr[6];
    int i,j;
    
    for(i =0; i<6;i++){
        scanf("%d", &arr[i]);
    }
    reverseArray(arr);
    for (j = 0; j<6;j++){
        printf("%d ", arr[j]);
    }
    
}

void reverseArray(int *ptr){
    int temp = 0;
    temp = *ptr;
    *ptr = *(ptr+5);
    ptr[5]= temp;
    temp = *(ptr + 1);
    ptr[1]= *(ptr +4);
    ptr[4]= temp;
    temp = *(ptr+2);
    ptr[2]=*(ptr + 3);
    ptr[3]= temp;
}