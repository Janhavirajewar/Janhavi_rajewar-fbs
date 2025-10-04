void main()
{
	char str[10]="hello";
	myStrlen(str);
}
void myStrlen(char *str) {
    int c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        c++;
    }
    printf("Length = %d", c);
}