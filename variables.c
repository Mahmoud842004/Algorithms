#include<stdio.h>

int main(){
    
// let vce = 0.2 
double ib;
double ic;
double beta;
int vcc;

scanf("%d",&vcc);

ib = (vcc-0.7)/(122500);
ic = (vcc-0.2)/(1000);
beta = ic/ib;

printf("%d",beta);

}


