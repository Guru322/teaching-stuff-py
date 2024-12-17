
#### **Definition**:  
An **array** is like a container that can hold **multiple values** of the same **data type**. Instead of creating separate variables for each value, you can use an **array** to group them together.

---

### **Key Points**:
1. **Single Data Type**: Arrays can only store values of the same type (e.g., all integers or all characters).
2. **Fixed Size**: The size of an array (number of values it can hold) must be defined when you create it.
3. **Indexing**: Values in an array are stored in **positions**, starting with **0**.  

---

### **Syntax to Declare an Array**
```c
data_type array_name[size];
```
- `data_type`: Type of values to store (`int`, `float`, `char`, etc.).
- `array_name`: Name of the array.
- `size`: Number of values the array can hold.

---

### **Example 1: Integer Array**
```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // An array of size 5

    printf("First value: %d\n", numbers[0]);  // Accessing index 0
    printf("Second value: %d\n", numbers[1]); // Accessing index 1
    return 0;
}
```
**Output**:
```
First value: 10
Second value: 20
```

---

### **How to Use Arrays**

1. **Store Values** in an Array:
```c
int marks[3]; // Array of size 3

marks[0] = 85; // Store value at index 0
marks[1] = 90; // Store value at index 1
marks[2] = 95; // Store value at index 2
```

---

2. **Access Values** from an Array:  
You can use the **index** to get the value at a position.
```c
printf("%d\n", marks[0]); // Print first value (85)
printf("%d\n", marks[1]); // Print second value (90)
```


---
