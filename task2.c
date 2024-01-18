#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    int a, b;

    for (a = 0, b= length - 1; a < b; a++, b--) {
        if (str[a] != str[b]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    char word[100];
    int stop= 0; // Added variable to control the loop

    // Loop continues until the user decides to exit
    while (!stop) {
        printf("Enter a word (type 'exit' to stop): ");
        scanf("%s", word);

        // Check if the user wants to exit
        if (strcmp(word, "exit") == 0) {
            stop = 1; // Set flag to exit the loop
        } else {
            // Check if the entered word is a palindrome
            if (isPalindrome(word)) {
                printf("Congrats! %s is a palindrome.\n", word);
            } else {
                printf("Try again! %s is not a palindrome.\n", word);
            }
        }
    }

    return 0;
}


