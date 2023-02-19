//2
/*
#include <stdio.h>
int main() {
    printf("%d\n",sizeof (int *));
    return 0;
}
*/
//3
/*
#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    short *p = (short*)arr;
    int i = 0;
    for(i=0; i<4; i++)
    {
        *(p+i) = 0;
    }

    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/
//4
/*
#include <stdio.h>
int main()
{
    int a = 0x11223344;
    char *pc = (char*)&a;
    *pc = 0;
    printf("%x\n", a);
    return 0;
}*/
//5
#include "stdio.h"
int main()
{
    void PrintArr(int *arr,int ArrLen);//打印数组的函数
    int arr[]={1,2,3,4,5,6,7};
    PrintArr(arr,sizeof (arr)/sizeof (int ));
    return 0;
}
void PrintArr(int *arr,int ArrLen)
{
    for (int i = 0; i < ArrLen; ++i)
    {
        printf("%d ",*(arr+i));
    }
}