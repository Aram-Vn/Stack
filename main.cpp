#include "Stack_declaration.h" // add Stack Library
#include <iostream>

int main()
{
    my::Stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Stack becomes 1, 2, 3, 4

    s.pop();
    s.pop();

    // Stack becomes 1, 2

    while (!s.empty())
    {
        std::cout << ' ' << s.top();
        s.pop();
    }
    std::cout << std::endl;

    // print stack elements
}
