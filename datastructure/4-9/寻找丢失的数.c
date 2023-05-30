
/*
int FindMax(int *nums,int numsSize);
int missingNumber(int* nums, int numsSize)
{
    //创建一个下标是0~9的数组，然后遍历目标数组，出现的数字当下标在型数组中＋1
    // 最后检查新数组，为0的就是没出现的
    int arr[FindMax(nums,numsSize)];
    for (int i = 0; i < numsSize; ++i)
    {
        arr[nums[i]]++;
    }
    for (int i = 0; i < 10; ++i)
    {
        if(arr[i]==0)
            return i;
    }
}
int FindMax(int *nums,int numsSize)
{
    int ret=nums[0];
    for (int i = 1; i < numsSize; ++i)
    {
        if(ret<nums[i])
            ret=nums[i];
    }
    return ret;
}*/
#include "stdlib.h"
//numsSize就是最大的数
int missingNumber(int* nums, int numsSize)
{
    //新建一个numsSize+1大小的数组，以nums数组元素作为下标，对应下标的arr数组元素+1，
    //最后仍是0的就是迷失的数
    int *arr=(int*)calloc(numsSize+1,sizeof(int));
    for (int i = 0; i < numsSize; ++i)
    {
        arr[nums[i]]++;
    }
    for (int i = 0; i < numsSize+1; ++i)
    {
        if(arr[i]==0)
            return i;
    }
    return 0;
}
