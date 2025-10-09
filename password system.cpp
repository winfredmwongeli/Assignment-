// KIOKO WINFRED MWONGELI
// CT101/G/26569/25

#include <stdio.h>
#include <string.h> 

#define CORRECT_PASSWORD "1234"
#define MAX_LENGTH 20

int main() {
    char user_input[MAX_LENGTH];

    printf("--- Password Login System (Do-While Loop) ---\n");

    do {
        printf("Please enter the password: ");

        if (scanf("%s", user_input) != 1) {
            printf("Error reading input. Please restart the program.\n");
            return 1;
        }

        if (strcmp(user_input, CORRECT_PASSWORD) != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(user_input, CORRECT_PASSWORD) != 0);

    printf("\n*** Access Granted ***\n");

    return 0;
}
