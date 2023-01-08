#include "stdio.h"
int main()
{
    int a[4];
    for (int i = 0; i < 4; ++i)
    {
        scanf("%d",&a[i]);
    }
    int out=a[0];
    for (int i = 0; i < 4; ++i)
    {
        if(out<a[i])
            out=a[i];
    }
    printf("%d",out);
    return 0;
}