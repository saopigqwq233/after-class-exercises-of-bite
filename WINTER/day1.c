#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int* printNumbers(int n, int* returnSize ) ;
int main()
{
    int n,num;
    scanf("%d",&n);
    printNumbers(n,&num);
    system("pause");
    return 0;
}
int* printNumbers(int n, int* returnSize ) 
{    
    int num=pow(10,n)-1;
    int *arr=(int*)malloc(sizeof(int)*num);
    *returnSize=num;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        arr[i-1]=i;
        printf("%d",i);
    }
    return arr;
}