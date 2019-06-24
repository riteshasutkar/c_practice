#include<stdio.h>
#define principal 500.0
#define period 10
int main()
{   int year;
    float amount, value, inrate;
    amount= principal;
    inrate= 0.1;
    year= 0;
     while(year <= period)
     {    printf("%d  %f\n", year, amount);
    value=amount + amount*inrate;
    year=year + 1;
    amount= value;}
    return 0;
}
