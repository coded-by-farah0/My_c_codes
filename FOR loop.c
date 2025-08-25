
   5 Programs using For Loop in C
   Author: FARAH SHAIKH

#include <stdio.h>

 Program 1
// Print first 10 natural numbers

int main1() {
    printf("Program 1: First 10 Natural Numbers\n");
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

Output:
Program 1: First 10 Natural Numbers
1 2 3 4 5 6 7 8 9 10



 Program 2 
// Print multiplication table of 7
int main2() {
    printf("Program 2: Multiplication Table of 7\n");
    int num = 7;
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

Output:
Program 2: Multiplication Table of 7
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70



- Program 3 
// Sum of first 20 natural numbers
int main3() {
    printf("Program 3: Sum of First 20 Numbers\n");
    int sum = 0;
    for(int i = 1; i <= 20; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}

Output:
Program 3: Sum of First 20 Numbers
Sum = 210



 Program 4 
// Factorial of a number (6!)
int main4() {
    printf("Program 4: Factorial of 6\n");
    int fact = 1;
    for(int i = 1; i <= 6; i++) {
        fact *= i;
    }
    printf("Factorial of 6 = %d\n", fact);
    return 0;
}

Output:
Program 4: Factorial of 6
Factorial of 6 = 720



 Program 5 
// Print squares of numbers from 1 to 10
int main5() {
    printf("Program 5: Squares of Numbers from 1 to 10\n");
    for(int i = 1; i <= 10; i++) {
        printf("Square of %d = %d\n", i, i*i);
    }
    return 0;
}

Output:
Program 5: Squares of Numbers from 1 to 10
Square of 1 = 1
Square of 2 = 4
Square of 3 = 9
Square of 4 = 16
Square of 5 = 25
Square of 6 = 36
Square of 7 = 49
Square of 8 = 64
Square of 9 = 81
Square of 10 = 100

