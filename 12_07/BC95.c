#include "stdio.h"
#include "stdlib.h"
int main()
{
    int num,max,min;
    scanf("%d",&num);
    int *n=(int *) malloc(sizeof (int )*num);
    for (int i = 0; i < num; ++i) {
        scanf("%d",&n[i]);
    }
    max=min=n[0];
    for (int i = 0; i < num; ++i)
    {
        if(max<n[i])
            max=n[i];
        if(min>n[i])
            min=n[i];
    }
    printf("%d",max-min);
    return 0;
}