#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>

class EvenStack {
private:
    stack<int> evenStack;

public:
    EvenStack();

    bool empty();
    size_t size();
    int top();
    void push(int value);
    void pop();
    void getEvenNumbers(stack<int>& inputStack);
    void emptyStack();
};

#endif
