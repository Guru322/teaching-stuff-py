The `void` data type is often used in functions. A `void` function doesn't return any value, and functions can have `void` parameters to indicate they don't take inputs.
example:

```c
#include <stdio.h>

// A function that returns nothing and takes no parameters
void greet() {
    printf("Hello, mom\n");
}

int main() {
    greet(); // Call the function
    return 0;
}
```


