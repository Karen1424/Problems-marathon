#include "stack.h"


int main()
{
    Stack<int> v;
    v.push(1);
    v.push(10);
    v.push(7);
    v.push(-5);
    std::cout << v.min_elem();


    return 0;
}