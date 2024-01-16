#ifndef STACK_DECLARATION_HPP
#define STACK_DECLARATION_HPP

#include <iostream>

namespace my {
    template <class T>
    class Stack
    {
    public:
        Stack();  // defolt constructor
        ~Stack(); // destructor

        Stack(const std::initializer_list<T>& init_list); // initializer_list constructor
        Stack(const Stack& other);     					  // copy constructor
        Stack(Stack&& other) noexcept; 				      // move constructor

    public:
        bool empty() const;  // True, if stack is empty ,Otherwisefalse
        size_t size() const; // returns Stack m_size
        T top() const;       // is used to reference the top(or the newest) element of the stack
        void push(T val);    // s used to insert or ‘push’ an element at the top of the stack.i
        void pop(); 		 // is used to remove or ‘pop’ an element from the top of the stack(newest or the topmost element in the stack).

    private:
        void realloc(); // reallocates memory, by doubleing the cap.

    private:
        size_t m_size;
        size_t m_cap;
        T* m_ptr;
    };

} // namespace my

#include "Stack.hpp"

#endif // STACK_DECLARATION_HPP
