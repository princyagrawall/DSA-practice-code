#include <stdio.h>

struct Employee {

    int Emp_id;

   
    union Name {
        char First_name[50];
        char Middle_name[50];
        char Last_name[50];
    } emp_name;

    int choice;  

   
    struct Address {
        char area[50];
        char city[50];
        char state[50];
    } addr;

    int age;
    int salary;
    char designation[100];
};

int main() {

    int num;

    printf("Number of employees: ");
    scanf("%d", &num);

    struct Employee emp[num];


    for(int i = 0; i < num; i++) {

        printf("\n--- Employee %d ---\n", i+1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].Emp_id);

        printf("Choose name to enter:\n");
        printf("1. First Name\n");
        printf("2. Middle Name\n");
        printf("3. Last Name\n");
        printf("Enter choice: ");
        scanf("%d", &emp[i].choice);

        if(emp[i].choice == 1) {
            printf("Enter First Name: ");
            scanf(" %[^\n]", emp[i].emp_name.First_name);
        }
        else if(emp[i].choice == 2) {
            printf("Enter Middle Name: ");
            scanf(" %[^\n]", emp[i].emp_name.Middle_name);
        }
        else {
            printf("Enter Last Name: ");
            scanf(" %[^\n]", emp[i].emp_name.Last_name);
        }

        printf("Enter Area: ");
        scanf(" %[^\n]", emp[i].addr.area);

        printf("Enter City: ");
        scanf(" %[^\n]", emp[i].addr.city);

        printf("Enter State: ");
        scanf(" %[^\n]", emp[i].addr.state);

        printf("Enter Salary: ");
        scanf("%d", &emp[i].salary);

        printf("Enter Age: ");
        scanf("%d", &emp[i].age);

        printf("Enter Designation: ");
        scanf(" %[^\n]", emp[i].designation);
    }

    // Printing Output
    printf("\n******** Employee Details ********\n");

    for(int i = 0; i < num; i++) {

        printf("\nEmployee %d\n", i+1);
        printf("ID: %d\n", emp[i].Emp_id);

        if(emp[i].choice == 1)
            printf("First Name: %s\n", emp[i].emp_name.First_name);
        else if(emp[i].choice == 2)
            printf("Middle Name: %s\n", emp[i].emp_name.Middle_name);
        else
            printf("Last Name: %s\n", emp[i].emp_name.Last_name);

        printf("Area: %s\n", emp[i].addr.area);
        printf("City: %s\n", emp[i].addr.city);
        printf("State: %s\n", emp[i].addr.state);
        printf("Salary: %d\n", emp[i].salary);
        printf("Age: %d\n", emp[i].age);
        printf("Designation: %s\n", emp[i].designation);
    }

    return 0;
}