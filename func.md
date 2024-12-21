In C, a **function** is a block of code that performs a specific task. Functions help organize and reuse code. 

### Parts of a Function

1. **Function Declaration (Prototype):**
   Tells the compiler about the function before it's used.
   ```c
   return_type function_name(parameters);
   ```

2. **Function Definition:**
   Contains the actual code for the function.
   ```c
   return_type function_name(parameters) {
       // code to execute
   }
   ```

3. **Function Call:**
   Executes the function in the main program or another function.

---

### Example 1: A Function to Add Two Numbers

```c
#include <stdio.h>

// Function Declaration
int add(int a, int b);

// Main Function
int main() {
    int num1 = 5, num2 = 10;
    int result = add(num1, num2);  // Function Call
    printf("The sum is: %d\n", result);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;  // Adds two numbers and returns the result
}
```

---

### Example 2: A Function with No Return and No Parameters
Sometimes a function doesn’t need to return a value or take input parameters.

```c
#include <stdio.h>

// Function Declaration
void greet();

// Main Function
int main() {
    greet();  // Function Call
    return 0;
}

// Function Definition
void greet() {
    printf("Hello, welcome to C programming!\n");
}
```

---

### Example 3: A Function to Multiply Numbers (With Return and Parameters)
This function multiplies two numbers and returns the result.

```c
#include <stdio.h>

float multiply(float x, float y);  // Function Declaration

int main() {
    float a = 2.5, b = 4.0;
    float product = multiply(a, b);  // Function Call
    printf("The product is: %.2f\n", product);
    return 0;
}

float multiply(float x, float y) {  // Function Definition
    return x * y;
}
```

---

### Key Points
1. **Return Type:**
   - `void`: No value is returned.
   - `int`, `float`, `char`, etc.: Value of the specified type is returned.

2. **Parameters:**
   - Functions can have parameters for inputs (`int a, int b` in the example above).
   - If no inputs are required, write `void` as the parameter.

3. **Call by Value:**
   - In C, parameters are passed by value.

