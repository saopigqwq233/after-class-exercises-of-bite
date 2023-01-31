#include<stdio.h>
#include<windows.h>
int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int lastmonth(int);
int main()
{
    int year,month,day;
    scanf("%d %d %d",&year,&month,&day);
    int last=lastmonth(month)+day;
    if(((year%4 == 0 && year%100 != 0) || year %400 == 0)&&(month>2))//是闰年
        last++;//闰年多一天
    printf("%d",last);
	system("pause");
    return 0;
}
int lastmonth(int n)
{
    int ret=0;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        ret+=months[i];
    }
    return ret;
}