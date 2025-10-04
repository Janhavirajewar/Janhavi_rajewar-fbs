#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets() in real programs for safety

   for (i = 0; str[i] != '\0'; i++) {
        // If not a digit, not a letter, and not a space
        if (!isdigit(str[i]) && !isalpha(str[i]) && str[i] != ' ') {
            count++;
        }
    }
    printf("Number of special characters: %d\n", count);
    return 0;
}
