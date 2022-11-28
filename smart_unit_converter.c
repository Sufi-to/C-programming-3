

#include<stdio.h>

double tempc(double);
double weig(double);
double heig(double);
int main (void){
    
    char word[2];
    
    double x;
    int j;
    int l;
    scanf("%d", &l);
    
    for(j = 0; j<l; j++){ 
            
        scanf("%lf %s", &x, word);
        if (word[0]=='c'){
            printf("%.6lf f\n", tempc(x));
        }else if (word[0]=='m'){
            printf("%.6lf ft\n", heig(x));
        }else if (word[0]=='g'){
            printf("%.6lf lbs\n", weig(x));
        }
    }

}
double tempc(double x){
    double temp = 0;
    temp= 32 + (1.8 * x);
    return temp;
}
double weig(double x){
    double weight = 0;
    weight = x * 0.002205;
    return weight;
}
double heig(double x){
    double height = 0;
    height= x * 3.2808;
    return height;
}