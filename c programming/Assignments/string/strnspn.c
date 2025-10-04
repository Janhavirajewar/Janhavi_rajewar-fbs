#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc123xyz";
    
    int len = strcspn(str, "abs");
    
    printf("Length: %d\n", len); // op is 2
}
