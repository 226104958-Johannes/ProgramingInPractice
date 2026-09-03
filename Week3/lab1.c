#include <stdio.h>

int main(){
    //Declaring Variables
    double salary=0.00;
    double housingAllowance=0.00;
    double transportAllowance=0.00;
    double taxAmount=0.00;
    
    double grossSalary=0.00;
    double netSalary=0.00;


    //1. Ask User for Salary
    printf("Enter the Salary");
    scanf("%lf", &salary);

    //2. Ask user for housing allowance
    printf("Enter housing allowance");
    scanf("%lf", &housingAllowance);

    //3. Ask user for transport allowance
    printf("Enter transport allowance");
    scanf("%lf", &transportAllowance);

    //4. Ask user for Tax amount
    printf("Enter tax amout");
    scanf("%lf", &taxAmount);

    //5. Calculate the gross Salary
    grossSalary = salary + housingAllowance + transportAllowance;
    
    //6. Display the gross
    printf("Gross Salary: %.2lfn\n", grossSalary);

    //7. Calculate net salary
    netSalary = salary + housingAllowance + transportAllowance;

    //8.Display net salary
    printf("Net salary: %.2lf", netSalary);

    return 0;
}