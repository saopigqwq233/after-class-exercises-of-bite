#include <stdio.h>
int main()
{
    //为输入两串数字准备
    int arr1[1000],arr2[1000];
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
        //printf("%d ",arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
        //printf("%d",arr2[i]);
    }
    int p1=0,p2=0;
    for(;p1<m&&p2<n;)
    {
        if(arr1[p1]<arr2[p2])
        {
            printf("%d ",arr1[p1]);
            p1++;
        }
        else
        {
            printf("%d ",arr2[p2]);
            p2++;
        }
    }
    if(p1==m)
    {
        for(;p2<n;p2++)
        printf("%d ",arr2[p2]);
    }
    else if(p2==n)
    {
        for(;p1<m;p1++)
        printf("%d ",arr1[p1]);
    }
    return 0;
}