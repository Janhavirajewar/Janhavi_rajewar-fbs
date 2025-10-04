#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc123xyz";
    
    int len = strspn(str, "abc");
    
    printf("Length: %d\n", len); // Output: 6
}
