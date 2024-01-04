#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i>=a)
        {
            if(i%3==0)
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);
}