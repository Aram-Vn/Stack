# My Stack Library

## Overview

`my::Stack` is a C++ template class that implements a basic stack data structure. This stack supports common stack operations such as push, pop, top, size, and empty. It is designed to be easy to use and flexible with any data type.

********************************************************************************************
## Features

### Constructors and Destructors

- **Default Constructor**: Creates an empty stack.
- **Destructor**: Releases resources and cleans up the stack.
- **Copy Constructor**: Creates a new stack with the same elements as an existing one.
- **Move Constructor**: Efficiently transfers ownership of resources from another stack.

### Accessors

- **empty()**: Returns true if the stack is empty; otherwise, returns false.
- **size()**: Returns the current size of the stack.

### Element Access
- **top()**: Returns the top element of the stack (newest element).

### Modifiers
- **push(T val)**: Inserts an element at the top of the stack.
- **pop()**: Removes the top element from the stack.

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

