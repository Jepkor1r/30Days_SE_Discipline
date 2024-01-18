#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    char word[100];
    int exitFlag = 0; // Added variable to control the loop

    // Loop continues until the user decides to exit
    while (!exitFlag) {
        printf("Enter a word (type 'exit' to stop): ");
        scanf("%s", word);

        // Check if the user wants to exit
        if (strcmp(word, "exit") == 0) {
            exitFlag = 1; // Set flag to exit the loop
        } else {
            // Check if the entered word is a palindrome
            if (isPalindrome(word)) {
                printf("%s is a palindrome.\n", word);
            } else {
                printf("%s is not a palindrome.\n", word);
            }
        }
    }

    return 0;
}


