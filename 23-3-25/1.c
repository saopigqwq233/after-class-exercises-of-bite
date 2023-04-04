#include<stdio.h>
#include<stdlib.h>
void FindSingle(float*arr,int storage,float*p1,float*p2);//以排好序的数组arr，数组容量storage
int cmp(const void*p1,const void*p2);//比较函数，小到大
//两个指向“单身狗”的指针p1,p2为参数
int main()
{
//32,-12,23.4,-76.3这四个数出现两次，-4和87出现一次,且最初数组不排序
	float arr[10]={32,-12,23.4,-76.3,-4,87,32,-12,23.4,-76.3};
	int storage=sizeof(arr)/sizeof(float);//数组的容量
	
	
	printf("排序前：");
	for(int i=0;i<storage;i++)//输出数组
	{
		printf("%.2f ",arr[i]);
	}
	printf("\n");
	
	
	qsort(arr,storage,sizeof(float),cmp);//对数组进行排序
	printf("排序后：");
	for(int i=0;i<storage;i++)//输出数组
	{
		printf("%.2f ",arr[i]);
	}
	printf("\n");
	
	
	float single1=0,single2=0;
	FindSingle(arr,storage,&single1,&single2);
	printf("两个单身狗是：%.2f %.2f\n",single1,single2);
	system("pause");
	return 0;
}
void FindSingle(float*arr,int storage,float*p1,float*p2)
{
	//从排好序的数组找到单独的两个数字
	//定位一个数字，找它的前后是否和它相等，
	//和前后两个不相等就是"单身狗"
	for(int i=0;i<storage;i++)
	{
		//第一个和最后一个元素稍微特殊
		if(i==0)//第一个元素
		{
			if(arr[i]!=arr[i+1])//说明第一个是单身狗
				*p1=arr[i];
		}
		else if(i==storage-1)//最后一个元素
		{
			if(arr[i-1]!=arr[i]);//说明最后一个是单身狗
				*p2=arr[i];
		}
		else
		{
			if((arr[i]!=arr[i-1])&&(arr[i]!=arr[i+1]))//如果和前后都不相等
			{
				if(*p1==0)
				*p1=arr[i];
				else//第二个单身狗被找到
				{
					*p2=arr[i];
					return;
				}
			}
		}
	}
}
int cmp(const void*p1,const void*p2)
{
	float t=*(float*)p1-*(float*)p2;
	return t>0?1:-1;
}