#include <stdio.h>
#include <string.h>
int main(){
    //Declaring variables
    char supplierName[100];
    char email[100];
    char phoneNumber[20];
    char town[100];
    char searchName[100];
    char backup[100];
    char sentence[200];

    //1. Enter supplier name
    printf("Enter Supplier Name: "); 
    fgets(supplierName, sizeof(supplierName), stdin);

    //2. Enter email
    printf("Enter Email: ");
    fgets(email, sizeof(email), stdin);

    //3. Enter phone number
    printf("Enter Phone Number: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);

    //4. Town
    printf("Enter Town: ");
    fgets(town, sizeof(town), stdin);

    //5. Displaying all information of the supplier with length
    printf("\nSupplier Information:\n");
    printf("Name: %s", supplierName, strlen(supplierName));
    printf("Email: %s", email, strlen(email));
    printf("Phone Number: %s", phoneNumber, strlen(phoneNumber));
    printf("Town: %s", town, strlen(town));

    //6. Search for a supplier by name
    printf("\nEnter a name to search: ");
    fgets(searchName, sizeof(searchName), stdin);

    //7. Check if the name matches
    searchName[strcspn(searchName, "\n")] = '\0';
    supplierName[strcspn(supplierName, "\n")] = '\0';

    if(strcmp(searchName, supplierName) == 0){
        printf("Supplier found: %s\n", supplierName);
    } else {
        printf("Supplier not found.\n");
    }

    //8. Copying supplier information
    strcpy(backup, supplierName);

    printf("\nOriginal Name: %s\n", supplierName);
    printf("Backup Name: %s\n", backup);

    //9. Constructing a supplier description
    strcpy(sentence, supplierName);
    strcat(sentence, " operates in ");
    strcat(sentence, town);
    strcat(sentence, ".");

    printf("\n%s\n", sentence);

    return 0;
}
