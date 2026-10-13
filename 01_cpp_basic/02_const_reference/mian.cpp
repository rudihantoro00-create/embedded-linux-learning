#include <iostream>
int sensor1 = 100;
int sensor2 = 200;

int main()
{
    int  *const  p= &sensor1; //p这个地址变量是不可变的
    std::cout << "sensor1 = " << sensor1 << std::endl;
    *p=300; //OK

    const int *a;            //a指向的数据不能通过a修改，但是a这个指针本身可以改变指向。
    //*a=100        是不允许的

    // int const *p ===const int *p;

    int b = 10;

    const int* const c = &b;   
     //既不能修改指针地址比如：c=&sensor,也不能通过地址c修改内容

    b = 100;

    //总结一下：看const修饰谁离谁最近 int* const c离c最近你们指针变量c就不能修改
    //而 const int *a：const 离*a最近所以*a就不能修改也就是地址里的内容不能修改
    
}