void main() {
	char str[20];
	scanf("%s",str);
	int i=0,count=1;
	for(i=0; str[i]!='\0'; i++) {
		if (str[i] == str[i + 1]) {
			count++;

		} else {
			printf("%c",str[i]);
			printf("%d",count);
			count=1;
		}

	}
}