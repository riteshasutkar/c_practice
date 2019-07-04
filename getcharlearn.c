#include<stdio.h>
int main()
{
    char answer,h,H,N;
    printf("Mera naam janana chahate ho kya?\n");
    printf("yes--H or no--N\n");
    answer = getchar();
    if (answer=='H' || answer== 'h')
    printf("hi.. i am Ritesh");
    else
    printf("Tu kisi k layak nhi hai");
    return 0;
}
