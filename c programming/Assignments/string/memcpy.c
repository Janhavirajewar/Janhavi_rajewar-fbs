#include<string.h>
void main()
{

char src[] = "Data";
char dest[10];
memcpy(dest, src, 3);
dest[4] = '\0';
printf("%s", dest);  // Output: Data
}