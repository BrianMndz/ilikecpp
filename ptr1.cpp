#include <iostream>

void mod_ptr(int *ptr)
{
    *ptr = 1;
}

int main()
{
    int a = 0;
    int *p = &a;
    mod_ptr(p);
    std::cout << "value: " << p << std::endl;
    std::cout << "change? " << std::boolalpha << (p == &a);
    return 0;
}