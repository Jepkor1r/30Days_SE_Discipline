#include<stdio.h>

int main() {
    int option;

    // Displaying a programming language menu
    printf("Programming Language menu:\n");
    printf("1. Front end programming languages\n");
    printf("2. Back end programming languages\n");
    printf("3. Logout\n");
	    
    // Getting user input for choice
    printf("Enter your option: ");
    scanf("%d", &option);

    // Using switch case to handle different choices
    switch(option) {
        case 1:
            printf("HTML\nCSS\nJS\n");
            // Additional code for viewing profile
            break;
        case 2:
            printf("Python\nSQL\nPHP\n");
            // Additional code for editing information
            break;
        case 3:
            printf("Logging out...\n");
            // Additional code for logging out
            break;
        default:
            printf("Invalid choice!\n");
            // Additional code for handling invalid choices

    return 0;
}
}
