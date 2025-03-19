#include<stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int i, max=0;

    // Scanning employee details
    for(i = 0; i < 3; i++) {
        printf("Scanning for employee %d:\n", i + 1);
        printf("Enter the ID: ");
        scanf("%d", &e[i].id);
        printf("Enter the name: ");
        scanf("%s", e[i].name);
        printf("Enter the salary: ");
        scanf("%f", &e[i].salary);
        printf("\n");
    }

    // Printing employee details
    for(i = 0; i < 3; i++) {
        printf("Printing for employee %d:\n", i + 1);
        printf("Id: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
        printf("\n");
    }

    // Finding employee with highest salary
    for(i = 0; i < 3; i++) {
        if(e[i].salary > e[max].salary) {
            max = i;
        }
    }

    // Displaying employee with highest salary
    printf("Employee with highest salary:\n");
    printf("Id: %d\n", e[max].id);
    printf("Name: %s\n", e[max].name);
    printf("Salary: %.2f\n", e[max].salary);

    return 0;
}
