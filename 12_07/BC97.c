#include "stdio.h"
int main()
{
    int positive=0,negative=0;
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        if(a[i]<0)
            negative++;
        else
            positive++;
    }
    printf("positive:%d\nnegative:%d",positive,negative);
    return 0;
}