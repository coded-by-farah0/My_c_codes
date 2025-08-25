Program 1: Store and print array elements
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output:
Array elements:
10 20 30 40 50


Program 2: Find sum of array elements
#include <stdio.h>
int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements = %d", sum);
    return 0;
}

Output:
Sum of array elements = 75


Program 3: Find maximum element in an array
#include <stdio.h>
int main() {
    int arr[6] = {12, 45, 67, 23, 89, 34};
    int max = arr[0];
    for(int i = 1; i < 6; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element = %d", max);
    return 0;
}

Output:
Maximum element = 89


Program 4: Reverse an array
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array in reverse order:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output:
Array in reverse order:
5 4 3 2 1


Program 5: Search an element in array
#include <stdio.h>
int main() {
    int arr[6] = {10, 25, 30, 45, 50, 60};
    int search = 45, found = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] == search) {
            found = 1;
            printf("Element %d found at position %d", search, i+1);
            break;
        }
    }
    if(!found) {
        printf("Element %d not found", search);
    }
    return 0;
}

Output:
Element 45 found at position 4
