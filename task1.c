#include<stdio.h>

int main() {
    int option;

    // Displaying a programming language menu
    printf("Programming Language menu:\n");
    printf("1. Front end programming languages\n");
    printf("2. Back end programming languages\n");
    printf("3. Logout\n");
	    
    // Getting user input for option
    printf("Enter your option: ");
    scanf("%d", &option);

    // Using switch case to handle different options
    switch(option) {
        case 1:
            printf("HTML\nCSS\nJS\n");
            // front end programming languages
            break;
        case 2:
            printf("Python\nSQL\nPHP\n");
            // back end programming languages
            break;
        case 3:
            printf("Logging out...\n");
            //logging out
            break;
        default:
            printf("Invalid choice!\n");
            // handling invalid choices

    return 0;
}
}
