#include <iostream>
#include <stack>

template <typename T>
class Queue {
public:
    Queue() = default;
    ~Queue() = default;
public:
    void enQueue(T);
    T deQueue();
private:
    std::stack<T> s1; 
    std::stack<T> s2;
};
    
template <typename T>    
void Queue<T>::enQueue(T value)
{
        while (!s1.empty()) 
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(value);
 
        while (!s2.empty()) 
        {
            s1.push(s2.top());
            s2.pop();
        }
}

template <typename T>
T Queue<T>::deQueue()
{
    if(s1.empty()) 
    {
        std::cout << "Q is Empty";
        std::exit(0);    
    }
        
    T value = s1.top();
    s1.pop();
    return value;
}


int main() {
    
    Queue<int> q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    std::cout << q.deQueue() << '\n';
    std::cout << q.deQueue() << '\n';
    std::cout << q.deQueue() << '\n';
 
    return 0;
}