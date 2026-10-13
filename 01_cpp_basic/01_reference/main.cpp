#include <iostream>
 void A( const int& x) //不能修改x，该函数作用只是为了读取某个大数据
 {
    
    std::cout << "x = " << x << std::endl;

 }
void B(int& x)  //不复制可以修改外部变量
{

    x=100;
}

int main()
{
    int a = 10;
    A(a);
    
    std::cout << "a = " << a << std::endl;

    return 0;
}