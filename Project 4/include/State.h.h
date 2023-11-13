#include "EvenStack.h"
#include <iostream>

using namespace std;

EvenStack::EvenStack() {
    // Constructor
}

bool EvenStack::empty() {
    return evenStack.empty();
}

size_t EvenStack::size() {
    return evenStack.size();
}

int EvenStack::top() {
    return evenStack.top();
}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        evenStack.push(value);
    } else {
        cerr << "Error - can only push even number" << endl;
    }
}

void EvenStack::pop() {
    evenStack.pop();
}

void EvenStack::getEvenNumbers(stack<int>& inputStack) {

    stack<int> tempStack;

    while (!inputStack.empty()) {
        int current = inputStack.top();
        inputStack.pop();

        if (current % 2 == 0) {
            evenStack.push(current);
        }

        tempStack.push(current);
    }


    while (!tempStack.empty()) {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
}

void EvenStack::emptyStack() {
    cout << "removing the following: ";
    while (!evenStack.empty()) {
        cout << evenStack.top() << " ";
        evenStack.pop();
    }
    cout << endl;
}
