#include<stdio.h>
int main()
{
    float kmph,mps;
    scanf("%f%f",&kmph,&mps);
    mps=(kmph*1000)/3600;
    printf("%.2f",mps);
}