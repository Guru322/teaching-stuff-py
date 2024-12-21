
`if-else` statements let your program **make decisions** based on conditions.  
Think of it like this:  
- **"If this happens, do this."**  
- **"Otherwise, do something else."**

---

### **Structure in C**  
Here’s how it looks in code:
```c
if (condition) {
    // Code to run if the condition is true
} else {
    // Code to run if the condition is false
}
```

---

### ** Example**  
Imagine you’re deciding whether to bring an umbrella:  
- **If it’s raining**, take an umbrella.  
- **Otherwise**, enjoy your day without one.  

---

### **Code Example: Check if a Number is Positive or Negative**
```c
#include <stdio.h>

int main() {
    int number = 5;  // Example value

    if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive (zero or negative).\n");
    }

    return 0;
}
```

---

### **How It Works**
1. The program checks the condition: `number > 0`.  
2. If the condition is **true** (e.g., `number = 5`):  
   - It runs the first block of code: `printf("The number is positive.\n");`.  
3. If the condition is **false** (e.g., `number = -3`):  
   - It runs the `else` block: `printf("The number is not positive.\n");`.

---

### **`if`, `else if`, and `else`**  
You can add more conditions using `else if`.

#### Example: Check if a Number is Positive, Negative, or Zero
```c
#include <stdio.h>

int main() {
    int number = 0;  // Example value

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
```

---

### **Explanation**
1. The program checks the first condition: `number > 0`.  
   - If true, it prints "positive" and skips the rest.  
2. If not, it checks `number < 0`.  
   - If true, it prints "negative" and skips the rest.  
3. If none of the conditions are true, it runs the final `else` block and prints "zero."

---

### **Output Examples**  
#### Case: `number = 5`
```
The number is positive.
```

#### Case: `number = -3`
```
The number is negative.
```

#### Case: `number = 0`
```
The number is zero.
```

---

### **Summary**
- Use `if` to check a condition.  
- Use `else` when nothing else matches.  
- Use `else if` for extra conditions.  

It’s just like **asking questions** and making decisions!
