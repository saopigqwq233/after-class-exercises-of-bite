//1
// https://edu.bitejiuyeke.com/homeworked/updateHomework?homeworkTitle=2023-07-28_%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0%E5%92%8C%E6%9E%90%E6%9E%84%E5%87%BD%E6%95%B0%E7%AD%89_%E4%BD%9C%E4%B8%9A&disableEidtor=true

#include <iostream>
#define Max(x,y) ((x)>=(y)?(x):(y))
#define Min(x,y) ((x)>=(y)?(y):(x))
#define Swap(x,y) x=x+y;y=x-y;x=x-y;
using namespace std;
bool is_Leapy(int year){
    if((0==year%4&&year%100!=0)||(0==year%400))
        return true;
    else
        return false;
}
const int nleapmonthdays[13]={0,31,28,31,30,31,30,
                         31,31,30,31,30,31};
const int leapmonthdays[13]={0,31,29,31,30,31,30,
                             31,31,30,31,30,31};
class DATE{
private:
    int year,month,day,days;
public:
    DATE(int y,int m,int d):year(y),month(m),day(d),days(0){howmany_days();}
    void howmany_days(){
        if(is_Leapy(year))
        {
            for(int i=1;i<month;i++)
                days+=leapmonthdays[i];
            days+=day;
        }
        else
        {
            for(int i=1;i<month;i++)
                days+=nleapmonthdays[i];
            days+=day;
        }
    }
    int get_days(){
        return days;
    }
};

int main(){
    char data1[9],data2[9];
    cin>>data1;
    cin>>data2;
    int ye1,mo1,da1;
    int ye2,mo2,da2;
    ye1=(data1[0]-'0')*1000+(data1[1]-'0')*100+(data1[2]-'0')*10+(data1[3]-'0');
    mo1=(data1[4]-'0')*10+(data1[5]-'0');
    da1=(data1[6]-'0')*10+(data1[7]-'0');

    ye2=(data2[0]-'0')*1000+(data2[1]-'0')*100+(data2[2]-'0')*10+(data2[3]-'0');
    mo2=(data2[4]-'0')*10+(data2[5]-'0');
    da2=(data2[6]-'0')*10+(data2[7]-'0');

    if(ye1>ye2)
    {
        Swap(ye1,ye2)
        Swap(mo1,mo2)
        Swap(da1,da2)
    }
    else if(ye1==ye2)
    {
        if(mo1>mo2){
            Swap(mo1,mo2)
            Swap(da1,da2)
        }
        else if(mo1==mo2)
        {
            if(da1>da2)
            {
                Swap(da1,da2)
            }
            else if(da1==da2) {
                cout << "2" << endl;
                return 0;
            }
        }
    }
    DATE date1(ye1,mo1,da1);
    DATE date2(ye2,mo2,da2);
    int days=0;
    for(int i=ye1;i<ye2;i++)
    {
        if(is_Leapy(i))
            days+=366;
        else
            days+=365;
    }
    cout<<days-date1.get_days()+1+date2.get_days()<<endl;
    return 0;
}