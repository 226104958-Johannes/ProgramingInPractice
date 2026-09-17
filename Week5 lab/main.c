#include <stdio.h>
    int main(){
        //Declare variables
    float salary = 0; 
    float total = 0; 
    float highest = 0; 
    float lowest = 0; 
    float average = 0; 

    //1. Introducing a loop
    for (int i = 1; i <= 50; i++) { 

    //2. Asking salary for employee
    printf("Enter salary for employee %d: ", i);
    scanf("%f", &salary);

    //3. Calculating total salary
    total += salary;

    //4. if statements
    if (i == 1) {
        highest = salary;
        lowest = salary;
    } else {
        if (salary > highest) {
            highest = salary;
        }
        if (salary < lowest) {
            lowest = salary;
        }
    }
    }
        
    //5. Calculating average
    average = total / 50;
    
    //6. Displaying results
    printf("Total salary: %.2f\n", total);
    printf("Highest salary: %.2f\n", highest); 
    printf("Lowest salary: %.2f\n", lowest);
    printf("Average salary: %.2f\n", average);

    return 0;
}