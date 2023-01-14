#include <iostream>

template <class T> class Stack {
private:
    T** stack;
    int count;

public:
    Stack();
    Stack(const Stack& st);
    ~Stack();
    void push(T* item);
    T* pop();
    T* Head();
    int Count();
    bool IsEmpty();
};

template<class T> Stack<T>::Stack() {
    stack = nullptr;
    count = 0;
}

template<class T> Stack<T>::Stack(const Stack& st) {
    stack = new T * [st.Count()];

    count = st.count;
    for (int i = 0; i < count; i++) {
        stack[i] = st.stack[i];
    }
}

template<class T> Stack<T>::~Stack() {
    delete[] stack;
}

template<class T> void Stack<T>::push(T* item) {
    T** tmp = stack;

    count++;
    stack = new T * [count];

    for (int i = 0; i < count - 1; i++) {
        stack[i] = tmp[i];
    }
    stack[count - 1] = item;

    delete[] tmp;
}

template<class T> T* Stack<T>::pop() {
    if (IsEmpty()) return 0;
    count--;
    return stack[count];
}

template<class T> T* Stack<T>::Head() {
    if (IsEmpty()) return 0;
    return stack[count - 1];
}

template<class T> int Stack<T>::Count() {
    return count;
}

template<class T> bool Stack<T>::IsEmpty() {
    return count == 0;
}
