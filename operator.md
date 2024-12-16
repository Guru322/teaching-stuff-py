
---

### 1. **Arithmetic Operators**  
These are used to perform basic mathematical operations:  
| **Operator** | **Operation**      | **Example**            | **Result**                  |  
|--------------|--------------------|-------------------------|-----------------------------|  
| `+`          | Addition           | `a + b` (5 + 3)        | `8`                         |  
| `-`          | Subtraction        | `a - b` (5 - 3)        | `2`                         |  
| `*`          | Multiplication     | `a * b` (5 * 3)        | `15`                        |  
| `/`          | Division           | `a / b` (6 / 3)        | `2`                         |  
| `%`          | Modulus (Remainder)| `a % b` (5 % 2)        | `1` (Remainder of 5 ÷ 2)    |  

**Example Program:**  
```c
#include <stdio.h>
int main() {
    int a = 10, b = 3;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    return 0;
}
```  

---

### 2. **Relational Operators**  
Used to compare two values. The result is `1` (true) or `0` (false).  

| **Operator** | **Operation**       | **Example**     | **Result** |  
|--------------|---------------------|-----------------|------------|  
| `==`         | Equal to            | `a == b` (5==3) | `0`        |  
| `!=`         | Not equal to        | `a != b` (5!=3) | `1`        |  
| `<`          | Less than           | `a < b` (5<3)   | `0`        |  
| `>`          | Greater than        | `a > b` (5>3)   | `1`        |  
| `<=`         | Less than or equal  | `a <= b` (5<=3) | `0`        |  
| `>=`         | Greater than or eq. | `a >= b` (5>=3) | `1`        |  

**Example Program:**  
```c
#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    return 0;
}
```  

---

### 3. **Logical Operators**  
Used to connect multiple conditions. Returns `1` for `true` and `0` for `false`.  

| **Operator** | **Operation**              | **Example**           | **Result**         |  
|--------------|----------------------------|-----------------------|--------------------|  
| `&&`         | Logical AND (true if both) | `a > 2 && b < 10` (1) | `1` (both true)    |  
| `||`         | Logical OR (true if either)| `a > 10 || b < 10` (1)| `1` (one is true)  |  
| `!`          | Logical NOT (inverse)      | `!(a > 2)` (false)    | `0` (not true)     |  

**Example Program:**  
```c
#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("a > 2 && b < 10: %d\n", a > 2 && b < 10);
    printf("a > 10 || b < 10: %d\n", a > 10 || b < 10);
    printf("!(a > 2): %d\n", !(a > 2));
    return 0;
}
```  

