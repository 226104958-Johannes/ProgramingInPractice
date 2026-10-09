#include <stdio.h>
#include <string.h>

int main() {
    // Section A Variables
    double salary[50];
    double sum = 0, average;
    double highest, lowest, searchSalary;

    // Section B Variables
    double budgets[10];
    double total = 0, avgBudget;

    // Section C Variables
    char registrations[20][20];
    char searchRegistration[20];

    int i, j, found = 0;

    // 1. Capture 50 salaries
    printf("Enter 50 salaries:\n");
    for(i = 0; i < 50; i++) {
        printf("Salary %d: ", i + 1);
        scanf("%lf", &salary[i]);
        sum += salary[i];
    }

    // 2. Display salaries
    printf("\nEmployee Salaries:\n");
    for(i = 0; i < 50; i++) {
        printf("Salary %d: %.2lf\n", i + 1, salary[i]);
    }

    // 3. Average salary
    average = sum / 50;
    printf("\nAverage Salary: %.2lf\n", average);

    // 4. Highest salary
    highest = salary[0];
    for(i = 1; i < 50; i++) {
        if(salary[i] > highest) {
            highest = salary[i];
        }
    }
    printf("Highest Salary: %.2lf\n", highest);

    // 5. Lowest salary
    lowest = salary[0];
    for(i = 1; i < 50; i++) {
        if(salary[i] < lowest) {
            lowest = salary[i];
        }
    }
    printf("Lowest Salary: %.2lf\n", lowest);

    // 6. Search salary
    printf("\nEnter a salary to search: ");
    scanf("%lf", &searchSalary);

    found = 0;
    for(i = 0; i < 50; i++) {
        if(salary[i] == searchSalary) {
            printf("Salary %.2lf found at position %d\n",
                   searchSalary, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Salary %.2lf not found\n", searchSalary);
    }

    // 7. Capture department budgets
    printf("\nEnter budgets for 10 departments:\n");
    for(i = 0; i < 10; i++) {
        printf("Budget %d: ", i + 1);
        scanf("%lf", &budgets[i]);
        total += budgets[i];
    }

    // 8. Display budgets
    printf("\nDepartment Budgets:\n");
    for(i = 0; i < 10; i++) {
        printf("Budget %d: %.2lf\n", i + 1, budgets[i]);
    }

    // 9. Total budget
    printf("\nTotal Budget: %.2lf\n", total);

    // 10. Average budget
    avgBudget = total / 10;
    printf("Average Budget: %.2lf\n", avgBudget);

    // 11. Sort budgets ascending
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(budgets[j] > budgets[j + 1]) {
                double temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    // Display sorted budgets
    printf("\nBudgets Sorted from Lowest to Highest:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2lf\n", budgets[i]);
    }

    // 12. Capture registration numbers
    printf("\nEnter 20 registration numbers:\n");
    for(i = 0; i < 20; i++) {
        printf("Registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    // 13. Display registration numbers
    printf("\nRegistration Numbers:\n");
    for(i = 0; i < 20; i++) {
        printf("Registration %d: %s\n", i + 1, registrations[i]);
    }

    // 14. Search registration number
    printf("\nEnter a registration number to search: ");
    scanf("%19s", searchRegistration);

    found = 0;
    for(i = 0; i < 20; i++) {
        if(strcmp(registrations[i], searchRegistration) == 0) {
            printf("Registration number %s found at position %d\n",
                   searchRegistration, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Registration number %s not found\n",
               searchRegistration);
    }

    return 0;
}