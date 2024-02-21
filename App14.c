#include <stdio.h>

char findFirstCapital(char *str) {
    if (*str == '\0') {
        return '\0'; // Return null character if no capital letter found
    } else {
        if (*str >= 'A' && *str <= 'Z') {
            return *str; // Return capital letter if found
        } else {
            return findFirstCapital(str + 1); // Recur to next character
        }
    }
}


int main() {
    char str[100];

    printf("Input a string including one or more capital letters: ");
    fgets(str, sizeof(str), stdin);

    char firstCapital = findFirstCapital(str);

    if (firstCapital != '\0') {
        printf("The first capital letter appears in the string is %c.\n", firstCapital);
    } else {
        printf("No capital letter found in the string.\n");
    }

    return 0;
}
