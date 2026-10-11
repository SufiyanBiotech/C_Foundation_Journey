#include<stdio.h>
int main(){
    float Eunit=50,billPrice;
    if(Eunit<50){
        billPrice=3*Eunit;
        printf("billPrice=%.2f",billPrice);
    }
    else if(Eunit>50 && Eunit<100){
        billPrice=3*50+5*Eunit;
        printf("billPrice=%.2f",billPrice);
    }
    else if(Eunit>100 && Eunit<200){
        billPrice=3*50+5*(100-50)+10*(200-100);
        printf("billPrice=%.2f",billPrice);
    }
    return 0;
}