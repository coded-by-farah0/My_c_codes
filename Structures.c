#include <stdio.h>
#include <string.h>

// 1. Structure for student details
struct Student {
    int roll;
    char name[50];
    float marks;
};

void studentDetails() {
    struct Student s = {1, "Alice", 87.5};
    printf("\n--- Student Details ---\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
}

// 2. Structure with user input
void studentInput() {
    struct Student s;
    printf("\nEnter roll, name, and marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);
    printf("You entered: %d %s %.2f\n", s.roll, s.name, s.marks);
}

// 3. Array of structures
void arrayOfStudents() {
    struct Student s[3] = {
        {1, "John", 85},
        {2, "Emma", 90},
        {3, "Raj", 78}
    };
    printf("\n--- Array of Students ---\n");
    for(int i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

// 4. Structure with pointer
void pointerToStructure() {
    struct Student s = {5, "Maya", 92.3};
    struct Student *ptr = &s;
    printf("\n--- Pointer to Structure ---\n");
    printf("Roll: %d, Name: %s, Marks: %.2f\n", ptr->roll, ptr->name, ptr->marks);
}

// 5. Nested structure
struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    struct Date joinDate;
};

void nestedStructure() {
    struct Employee e = {"Ravi", {15, 8, 2020}};
    printf("\n--- Nested Structure ---\n");
    printf("Name: %s\nJoining Date: %02d/%02d/%d\n", e.name, e.joinDate.day, e.joinDate.month, e.joinDate.year);
}

int main() {
    studentDetails();
    studentInput();
    arrayOfStudents();
    pointerToStructure();
    nestedStructure();
    return 0;
}
