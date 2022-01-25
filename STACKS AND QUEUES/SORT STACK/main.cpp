#include <iostream>
#include <stack>


template <typename T>
std::stack<T> sortStack(std::stack<T> &input)
{
    std::stack<T> tmpStack;
 
    while (!input.empty())
    {
        T tmp = input.top();
        input.pop();
 
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            input.push(tmpStack.top());
            tmpStack.pop();
        }
        tmpStack.push(tmp);
    }
 
    return tmpStack;
}
 

int main() {
    std::stack<int> s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    std::stack<int> result = sortStack(s);

     while (!result.empty())
    {
        std::cout << result.top()<< " ";
        result.pop();
    }

    return 0;
}