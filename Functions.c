/* ============================================
   C Programs on Functions
   Author: coded-by-farah0
   ============================================ */

/* Program 1: Add Two Numbers */
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
/*
int main() {
    int x = 5, y = 7;
    printf("Sum = %d\n", add(x, y));
    return 0;
}
*/

/* Program 2: Factorial */
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
/*
int main() {
    int n = 5;
    printf("Factorial = %d\n", factorial(n));
    return 0;
}
*/

/* Program 3: Check Even or Odd */
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}
/*
int main() {
    checkEvenOdd(7);
    return 0;
}
*/

/* Program 4: Swap Two Numbers */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("After swap: x=%d y=%d\n", x, y);
    return 0;
}
*/

/* Program 5: Find Maximum */
int max(int a, int b) {
    return (a > b) ? a : b;
}
/*
int main() {
    printf("Max = %d\n", max(15, 9));
    return 0;
}
*/

/* Program 6: Area of Circle */
float areaCircle(float r) {
    return 3.1416 * r * r;
}
/*
int main() {
    printf("Area = %.2f\n", areaCircle(5));
    return 0;
}
*/

/* Program 7: Fibonacci Series */
void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
/*
int main() {
    fibonacci(10);
    return 0;
}
*/

/* Program 8: Reverse a Number */
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
/*
int main() {
    printf("Reversed = %d\n", reverse(1234));
    return 0;
}
*/

/* Program 9: Check Prime */
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
/*
int main() {
    printf(isPrime(7) ? "Prime\n" : "Not Prime\n");
    return 0;
}
*/

/* Program 10: Celsius to Fahrenheit */
float toFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}
/*
int main() {
    printf("Fahrenheit = %.2f\n", toFahrenheit(37));
    return 0;
}
*/
