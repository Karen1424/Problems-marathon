#include "three stack.h"

int main()
{

    threeStack<int> v;
    v.push1(10);
    v.push2(20);
    v.push3(30);
    v.pop1();
    v.isEmpty2();
    std::cout << v.isEmpty1();

    return 0;
}