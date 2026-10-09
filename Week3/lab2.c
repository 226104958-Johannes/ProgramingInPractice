#include <stdio.h>

int main(){
    //1. Declare Variables
    char supplierName[50];
    double price=0.00;
    double budget=0.00;
    int registered=0;
    int documentComplete=0;

    //2. Enter Supplier name
    printf("Enter supplier name: ");
    scanf("%49s", &supplierName);

    //3. Enter price
    printf("Enter price: ");
    scanf("%lf", &price);

    //4. Enter budget
    printf("Enter available budget: ");
    scanf("%lf", &budget);

    //5. Enter registration status
    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    //6. Enter Document completion status
    printf("Is document complete? (1=Yes, 0=No): ");
    scanf("%d", &documentComplete);

    if (registered == 0 || documentComplete == 0) 
{ 
    printf("\nSupplier: %s\n", supplierName); 
    printf("Status: Disqualified\n"); 
} 
    else if (price > budget) 
{ 
    printf("\nSupplier: %s\n", supplierName); 
    printf("Status: Disqualified\n"); 
} 
    else 
{ 
    printf("\nSupplier: %s\n", supplierName); 
    printf("Status: Qualified\n"); 
} 
    return 0; 
} 
