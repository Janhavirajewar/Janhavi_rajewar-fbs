#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets() in real programs for safety

   	for (i = 0; str[i] != '\0'; i++) {
        // Check if not a letter or digit or space
        if (!(str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'Z') ||
               (str[i] >= '0' && str[i] <= '9') ||
               str[i] == ' ') {
            count++;
        }
    }
    
    printf("Number of special characters: %d\n", count);
    return 0;
}
