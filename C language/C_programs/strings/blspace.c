#include <stdio.h>

int main() {
    char inputString[100];
    int i, j = 0;

    printf("Enter a string with spaces: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Removing the spaces in-place
    for (i = 0; inputString[i]; i++) {
        if (inputString[i] != ' ') {
            inputString[j++] = inputString[i];
        }
    }
    inputString[j] = '\0';

    printf("String after removing spaces: %s\n", inputString);

    return 0;
}
