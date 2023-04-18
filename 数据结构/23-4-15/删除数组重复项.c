#include "stdio.h"
int removeDuplicates(int* nums, int numsSize)
{
    //两个索引,遍历数组
    //i从第一个元素开始，j从第二个元素开始
    //当遇到i和j的索引元素相等时，i停止，j往后移动
    //直到i和j索引的值不一样时，i下一个索引的值等于j索引的值
    int i =0,j=1;
    for (; i <numsSize && j<numsSize; ++j)
    {
        if(nums[i]!=nums[j])
        {
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}