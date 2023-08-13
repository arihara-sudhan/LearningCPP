#include <iostream>
using namespace std;

#define SIZE 5

class stack {
    int tos;
    int s[SIZE];

public:
    void push(int num);
    void pop();
    void init();
} stk1;

void stack::init() {
    tos = -1;
}

void stack::push(int num) {
    if (tos == SIZE - 1) {
        cout << "CAN NOT PUSH!\n";
    } else {
        cout << "PUSHED " << num << "\n";
        tos++;
        s[tos] = num;
    }
}

void stack::pop() {
    if (tos == -1) {
        cout << "NOTHING TO POP!\n";
    } else {
        cout << "POPPED " << s[tos] << "\n";
        tos--;
    }
}

int main() {
    stk1.init();
    stk1.push(1);
    stk1.push(2);
    stk1.push(3);
    stk1.push(4);
    stk1.push(5);
    stk1.push(6);
    stk1.pop();
    stk1.pop();
    stk1.pop();
    stk1.pop();
    stk1.pop();
    stk1.pop();
    return 0;
}
