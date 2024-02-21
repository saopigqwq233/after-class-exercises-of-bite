#include <cstring>
#include "iostream"
using namespace std;
//void test1(){
//    const int b=10;
//    b=20;
//}
//void test2(){
//    const int b =10;
//    const int* const pb=&b;//指向const int 类型的const指针，pb值不可被修改
//    pb=NULL;//error
//}
//void test3(){
//    const int a =10;
//    const int *pa=&a;
//    pa =NULL;//ag
//    *pa = 20;//de
//
//
//    int b=10;
//    int* const pb = &b;
//    pb = NULL;//de
//    *pb = 20;//ag
//}
//void test4(){
//    int b=10;
//    const int *pb = &b;
//    *pb = 20;//error
//}
//void test5(){
//    int a=10;
//    const int& b =a;
//    b = 20;//error
//}
//void test6(){
//    //sample1
//    const int a=10;
//    int *pa =&a;//error
//
//    //sample2
//    int b =20;
//    const int *pb=&b;
//    int *p=pb;//error
//}
//enum {male=0,female}Sex;
//class Person{
//private:
//    char* _name;
//    int _age;
//    const int _sex;
//public:
//    Person(char* name,int age,int sex):_age(age),_sex(sex){
//        _name=new char[strlen(name)+1];
//        strcpy(_name,name);
//    }
//
//    int add_age(int add=1)const{
//        //const类型函数不可对成员变量做修改
//        _age+=add;//error
//        //const类型函数不可调用非const类型成员函数
//        get_sex();//error
//    }
//    int addd_age(int age=1){
//        _age+=age;
//    }
//    int get_sex(){cout<<"no const "<<_sex<<endl;}
//};

//class sample1{
//public:
//    const int a=1;
//};
//
//
//class sample2{
//public:
//    const int a;
//    sample2():a(1){}
//};
//
//class sample3{
//public:
//    const static int a;
//};
//const int sample3::a=1;
//void test8(){
//    static int a=0;
//    a++;
//    cout<<a<<' ';
//    cout<<&a<<endl;
//}
//int main()
//{
//    for (int i = 0; i < 10; ++i)
//    {
//        test8();
//    }
//
//}
//class sample4{
//private:
//    int a;
//    static int b;
//public:
//    sample4():a(1){}
//    void add_b(){
//        b++;
//    }
//    int get_b(){return b;}
//    void print_b_index(){
//        cout<<&b<<endl;
//    };
//};
//int sample4::b = 0;
//int main(){
//
//    return 0;
//}
//class sample5{
//public:
//    static int a;
//    sample5(){
//        cout<<"init class"<<endl;
//    }
//    ~sample5(){
//        cout<<"des class"<<endl;
//    }
//};
//int sample5::a=222;
//int main(){
//    if(true) { sample5 s1, s2, s3; }
//    cout<<sample5::a<<endl;
//    return 0;
//}
//class sample6{
//public:
//    static int a;
//    int b;
//
//    //static函数不依赖于对象实例化存在
//    static void test(){
//        cout<<"hello static"<<endl;
//
//        //static函数无法调用非static成员--非static的成员变量\函数可能没有实例化
////        cout<<b<<endl;//error
//    }
//};
//int sample6::a=10;
//int main(){
//    sample6::test();//sample6类并未实例化
//    return 0;
//}
int a=0;
int main(){
    int a=1;
    {
        int a=2;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}


