//括号匹配问题
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "assert.h"
#include "string.h"
#define null NULL
typedef char STDatatype;
typedef struct Stack{
    STDatatype *a;
    int top;
    int capacity;
}ST;
bool STEmpty(ST *pst);
void STinit(ST *pst)//初始化
{
    assert(pst);
    pst->a=null;
    pst->top=0;//top指向0说明栈为空
    pst->capacity=0;
}
void STDestroy(ST *pst)//销毁栈
{
    assert(pst);
    //释放栈空间并置空
    free(pst->a);
    pst->a=null;
    //top与capacity置0
    pst->capacity=pst->top=0;
}
void STPush(ST *pst,STDatatype x)//入栈
{
    //先判断栈是否满，满则扩容
    if(pst->top==pst->capacity)
    {
        int newcapacity=(pst->capacity==0)?4:(pst->capacity*2);//如果栈空间还未分配，则初始化4个空间
        STDatatype* tmp=(STDatatype*) realloc(pst->a,newcapacity*sizeof (STDatatype));
        //检查空间申请是否成功
        if(tmp==NULL)
        {
            perror("realloc error");
            return;

        }
        pst->a=tmp;
        pst->capacity=newcapacity;
    }
    //入栈操作
    pst->a[pst->top] = x;
    pst->top++;
}
void STPop(ST *pst)//出栈
{
    assert(pst);
    //判断是否为空
    assert(!STEmpty(pst));
    //直接把索引前移动
    pst->top--;
}
STDatatype STTop(ST *pst)//栈顶元素
{
    assert(pst);
    assert(!STEmpty(pst));
    return pst->a[pst->top-1];
}
bool STEmpty(ST *pst)//判断栈是否为空
{
    assert(pst);

    //如果为空返回1，不为空返回0
    //top为0则栈空
    return pst->top==0;
}
bool isValid(char * s)
{
    ST st;
    STinit(&st);
    while (*s)//遇到字符'\0'结束
    {
        //如果遇到的时左括号，入栈
        if(*s=='('||
           *s=='['||
           *s=='{')
        {
            STPush(&st,*s);
        }
        else//遇到右括号
        {
            //如果栈空，说明之前没有左括号
            if(STEmpty(&st))
            {
                STDestroy(&st);
                return false;
            }


            //取栈顶元素与当前字符对比
            char top= STTop(&st);
            STPop(&st);
            if((*s==')'&&top!='(')||
               (*s==']'&&top!='[')||
               (*s=='}'&&top!='{'))
            {
                STDestroy(&st);
                return false;
            }
        }
        s++;
    }
    //最后一个字符串遍历完毕
    if(STEmpty(&st))
        return true;
    else
        return false;
}
