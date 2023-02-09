#include "stdio.h"
int main()
{
    int ways(int );
    int n;
    scanf("%d",&n);
    printf("%d",ways(n));
    return 0;
}
int ways(int n)
{
    int ret=0;
    for (int step1 = n;step1>=0; --step1)
    {
        for (int step2 = 0; step2 <= n/2; ++step2)
        {
            printf("aa");
            if(step1+step2*2==n)
                ret++;
        }
    }
    return ret;
}




