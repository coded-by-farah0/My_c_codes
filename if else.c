
   Program 1: Check Even or Odd
  
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}
 Output:
Enter a number: 7
7 is Odd
*/



   Program 2: Find Largest of Two Numbers
  
#include <stdio.h>
int main2() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d is larger\n", a);
    else
        printf("%d is larger\n", b);

    return 0;
}
Output:
Enter two numbers: 10 25
25 is larger

   Program 3: Check Positive, Negative or Zero
   
#include <stdio.h>
int main3() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Positive Number\n");
    else if(num < 0)
        printf("Negative Number\n");
    else
        printf("Number is Zero\n");

    return 0;
}
 Output:
Enter a number: -4
Negative Number


   Program 4: Check Voting Eligibility
   
#include <stdio.h>
int main4() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are NOT eligible to vote.\n");

    return 0;
}

 Output:
Enter your age: 16
You are NOT eligible to vote.



   Program 5: Find Largest of Three Numbers
  
#include <stdio.h>
int main5() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x >= y && x >= z)
        printf("%d is the largest\n", x);
    else if(y >= x && y >= z)
        printf("%d is the largest\n", y);
    else
        printf("%d is the largest\n", z);

    return 0;
}
 Output:
Enter three numbers: 12 45 9
45 is the largest
