#include <stdio.h>

int main() {
    int  typingSpeed;
    char buffer[3];

    while (1) {
        printf("Enter your touch typing speed: ");

        // Read user input as a string
        fgets(buffer, 3, stdin);

        // Attempt to convert string to an integer1
        if (sscanf(buffer, "%2d", &typingSpeed) == 1) {
            // Input successfully converted to an integer
            printf("You entered: %d\n", typingSpeed);
            break; // Exit the loop
        } else {
            // Invalid input, clear input buffer
            printf("Invalid input! Please enter in numbers your touch typing speed.\n");

            // Clear input buffer to handle unexpected input
            while (getchar() != '\n');
        }
    }

    return 0;
}

		
