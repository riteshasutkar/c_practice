#include<stdio.h>

void main()
{
    int fahr,celcius,lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while(fahr<=upper){
        celcius = (5*(fahr-32))/9;
        printf("%3d\t%d\n",fahr,celcius);
        fahr=fahr+step;
    }
}