### 1. Structure of a C Program

Every C program consists of two main parts: the **headers** and the **main function**.

#### Headers
These are like instructions telling the program where to find certain tools it needs to use. They are written at the beginning of your code. The most commonly used header is:

```c
#include <stdio.h>
```

This line tells your program to use the standard input-output library, which allows the program to read data and print output.

#### Main Function
This is where the program starts running. It’s like the engine that drives the program:

```c
int main() {
    // Actual code
    return 0;
}
```

- `int main()`: This line starts the main function. `int` indicates that the main function returns an integer value.
- `{ }`: Curly braces mark the start and end of the main function's code block.
- `return 0;`: This statement signifies the end of the program, telling the computer that the program executed successfully.

### 2. Comments

Comments are notes you can add to your code to make it easier to understand. The computer ignores these when running the program. You can write:
- **Single-line comments**: Start with `//`. 
  ```c
  // This is a single-line comment
  ```

- **Multi-line comments**: Enclosed within `/*` and `*/`.
  ```c
  /* This is a 
     multi-line comment */
  ```

### 3. A Simple Program Example


```c
#include <stdio.h>  // standard I/O library

int main() {  // Start of the main function
    printf("Hello, Mom!\n");  // Print message to the screen
    return 0;  // End the program
}
```

- `printf("Hello, world!\n");`: This function prints "Hello, Mom!" to the screen. `\n` adds a new line after the text.
  
### Key Points:

- **Semicolon (`;`)**: Every statement in C ends with a semicolon.
- **Case Sensitivity**: C is case sensitive, meaning `Main` and `main` would be considered different.
- **Whitespace**: Spaces, tabs, and new lines are generally ignored, but they can make your code more readable.


