#ifndef _THREE_STACK_H_
#define _THREE_STACK_H_

#include <iostream>
#include <vector>

template <typename T>
class threeStack {
public:
    threeStack();
    ~threeStack();
public:
    void push1(const T);
    void push2(const T);
    void push3(const T);
    T pop1();
    T pop2();
    T pop3();
    bool isEmpty1();
    bool isEmpty2();
    bool isEmpty3();    
private:
    int m_top1;
    int m_top2;
    int m_top3;
    int m_max_size;
    int m_size1;
    int m_size2;
    int m_size3;
    std::vector<T> m_vec;
};

#include "threeStack.hpp"
#endif // _THREE_STACK_H_ 