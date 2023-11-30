# My Stack Library

********************************************************************************************

## Overview

`my::Stack` is a C++ template class that implements a basic stack data structure. This stack supports common stack operations such as push, pop, top, size, and empty. It is designed to be easy to use and flexible with any data type.

********************************************************************************************
## Features

### Constructors and Destructors

- `Default Constructor`: Creates an empty stack.
- `Destructor`: Releases resources and cleans up the stack.
- **Copy Constructor**: Creates a new stack with the same elements as an existing one.
- **Move Constructor**: Efficiently transfers ownership of resources from another stack.

### Accessors

- `empty()`: Returns true if the stack is empty; otherwise, returns false.
- `size()`: Returns the current size of the stack.

### Element Access
- `top()`: Returns the top element of the stack (newest element).

### Modifiers
- `push(T val)`: Inserts an element at the top of the stack.
- `pop()`: Removes the top element from the stack.

## Implementation Details

- The stack dynamically allocates memory for its elements and automatically reallocates when the capacity is reached.
- The memory reallocation strategy involves doubling the capacity.

## Usage

To use the `my::Stack` class 
Copy both Stack_declaration.hpp and Stack.h files into your project directory.
include the "Stack_declaration.hpp" header file in your C++ project.

```cpp
#include "Stack_declaration.hpp"
```

## Usage
Once the stack is integrated into your project, you can use the provided functions to work with the stack
```cpp
#include <iostream>
#include "Stack_declaration.hpp"

int main() {
    // Create a stack of integers
    my::Stack<int> intStack;

    // Push elements onto the stack
    intStack.push(42);
    intStack.push(17);
    intStack.push(8);

    // Display the top element
    std::cout << "Top element: " << intStack.top() << std::endl;

    // Pop an element
    intStack.pop();

    // Display the size of the stack
    std::cout << "Stack size: " << intStack.size() << std::endl;

    //print elements
 	  while (!s.empty()) { 
      std::cout << ' ' << s.top(); //
     	s.pop();
  	}
	  std::cout << std::endl;

    return 0;
}
```

