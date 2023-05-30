void reverse(int nums[],int *former,int *latter);
void rotate(int *nums,int numSize,int k)
{   //用三次旋转来达到右旋的效果
    //k%numSize来解决右旋的位移数大于数组元素个数的情况
    reverse(nums,nums,(nums+numSize-k%numSize-1));
    reverse(nums,(nums+numSize-k%numSize),nums+numSize-1);
    reverse(nums,nums,nums+numSize-1);
}
void reverse(int nums[],int *former,int *latter)
{
    while (former<latter)
    {
        int temp=*former;
        *former=*latter;
        *latter=temp;
        former++;
        latter--;
    }
}