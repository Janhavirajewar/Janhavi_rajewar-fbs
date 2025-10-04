#include<string.h>
void main()
{

char arr[5];
memset(arr, '*', 4);
arr[4] = '\0';
printf("%s", arr);  // Output: ****
}