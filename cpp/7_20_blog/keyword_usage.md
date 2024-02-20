# 关键字使用

## 1. const

const关键字是一个修饰符，所谓“修饰符”，就是在编译器进行编译的过程中，给编译器一些“要求”或“提示”，但修饰符本身，并不产生任何实际代码。就 const 修饰符而言，它用来告诉编译器，**被修饰的这些东西，具有“只读”的特点**。在编译的过程中，一旦我们的代码试图去改变这些东西，编译器就应该给出错误提示。  

尽可能使用const，可以帮助我们避免很多错误，提高我们的程序健壮性。

### 1.1 与变量一起使用

#### （1）const int

最基本的方式，便是const修饰变量，使之成为一个常变量----即不可以通过此变量名修改变量值。

```c++
void test1(){
    const int b=10;//b不可被修改
    b=20;//error
}
```

```c++
void test2(){
    const int b =1;
    const int* const pb=&b;//指向const int 类型的const指针，pb值不可被修改
    pb=NULL;//erro
}
```

- 需要注意的是，const与指针\*的关系,**当const在\*前**，说明该指针指向一个常变量，**当const在\*之后**，说明该指针是常指针，指针值不可修改。  
  
  ```c++
  void test3(){
      const int a =10;
      const int *pa=&a;
      pa =NULL;//ag
      *pa = 20;//error
      int b=10; 
      int* const pb = &b;
      pb = NULL;//error 
      *pb = 20;//ag
  }
  ```

- **允许把非const对象的地址赋给指向const对象的指针**。
  这样，通过指针无法改变对象值
  
  ```c++
  void test4(){
      int b=10;
      const int *pb = &b;
      *pb = 20;//error
  }
  ```
  
  同样的，常引用也无法改变非常对象值
  
  ```c++
  void test5(){
      int a=10;
      const int& b =a;
      b = 20;//error
  }
  ```

- 此外，非const变量默认为extern。要使const变量能够在其他文件中访问，必须在文件中显式地指定它为extern。

#### （2）const对象赋值时的转化

- const对象无法赋给指向非const对象的指针
  
  ```c++
  void test6(){
      //sample1
      const int a=10;
      int *pa =&a;//error
  
      //sample2
      int b =20;
      const int *pb=&b;
      int *p=pb;//error
  }
  ```

### 1.3 在类中使用const

## 2. staticag-0-1hn25ftimag-1-1hn25ftim

## 3. extern

## 
