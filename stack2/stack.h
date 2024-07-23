#ifndef STACK_H
#define STACK_H

class Stack {
private:
	int *arr;
	int top;
	int capacity;
	
public:
	Stack(int size = 100) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    bool empty() {
        return top == -1;
    }

    bool full() {
        return top == capacity - 1;
    }

    void push(int value) {
        if (!full()) {
            arr[++top] = value;
        } else {
            std::cout << "Stack overflow!" << std::endl;
        }
    }

    int pop() {
        if (!empty()) {
            return arr[top--];
        } else {
            std::cout << "Stack underflow!" << std::endl;
            return -1;
        }
    }
};

#endif
