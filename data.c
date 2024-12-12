#include <stdio.h>

int main() {
    // Integer type
    int age = 25;
    printf("Integer: %d\n", age);

    // Float type
    float temperature = 98.60;
    printf("Float: %.2f\n", temperature); // %.2f for two decimal places

    // Double type
    double bigDecimal = 12345.6789;
    printf("Double: %.4f\n", bigDecimal); // %.4f for four decimal places

    // Character type
    char grade = 'A';
    printf("Character: %c\n", grade);

    // Short integer
    short int smallNumber = 32000;
    printf("Short Int: %d\n", smallNumber);

    // Long integer
    long int largeNumber = 1234567890;
    printf("Long Int: %ld\n", largeNumber);

    // Long long integer
    long long int veryLargeNumber = 9223372036854775807LL;
    printf("Long Long Int: %lld\n", veryLargeNumber);

    // Unsigned integer
    unsigned int positiveNumber = 40000;
    printf("Unsigned Int: %u\n", positiveNumber);

    return 0;
}
