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
void test6(){
    //sample1
    const int a=10;
    int *pa =&a;//error

    //sample2
    int b =20;
    const int *pb=&b;
    int *p=pb;//error
}
int main(){

    return 0;
}

