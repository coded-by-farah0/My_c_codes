 Programs using WHILE Loop
Print numbers from 1 to 5 
int while() {
    int i = 1;
    while(i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
/*
Output:
1
2
3
4
5
 Program 2: Print even numbers from 2 to 10 
int while() {
    int i = 2;
    while(i <= 10) {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}
/*
Output:
2
4
6
8
10
*/

 Program 3: Sum of first 5 numbers 
int while() {
    int i = 1, sum = 0;
    while(i <= 5) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
/*
Output:
Sum = 15
*/

/* Program 4: Print multiplication table of 3 */
int while() {
    int i = 1;
    while(i <= 10) {
        printf("3 x %d = %d\n", i, 3 * i);
        i++;
    }
    return 0;
}
/*
Output:
3 x 1 = 3
...
3 x 10 = 30
*/

/* Program 5: Countdown from 5 to 1 */
int while() {
    int i = 5;
    while(i >= 1) {
        printf("%d\n", i);
        i--;
    }
    return 0;
}
/*
Output:
5
4
3
2
1

 5 Programs using do while loop

 Program 6: Print numbers from 1 to 5 
int dowhile() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while(i <= 5);
    return 0;
}

Output:
1
2
3
4
5


 Program 7: Print numbers from 10 to 1 
int dowhile() {
    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while(i >= 1);
    return 0;
}

Output:
10
9
...
1


 Program 8: Print first 5 odd numbers 
int dowhile3() {
    int i = 1, count = 0;
    do {
        printf("%d\n", i);
        i += 2;
        count++;
    } while(count < 5);
    return 0;
}

Output:
1
3
5
7
9


 Program 9: Sum of numbers from 1 to 5 
int dowhile() {
    int i = 1, sum = 0;
    do {
        sum += i;
        i++;
    } while(i <= 5);
    printf("Sum = %d\n", sum);
    return 0;
}

Output:
Sum = 15


 Program 10: Print squares of numbers from 1 to 5 */
int dowhile() {
    int i = 1;
    do {
        printf("%d^2 = %d\n", i, i * i);
        i++;
    } while(i <= 5);
    return 0;
}

Output:
1^2 = 1
2^2 = 4
3^2 = 9
4^2 = 16
5^2 = 25


