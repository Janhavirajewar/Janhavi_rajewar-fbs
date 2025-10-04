#include <stdio.h>

// Define complex number type
typedef struct complex
{
	int real;
	int imaginary;
} complex;

// Function declarations
void store(complex*, int);
void display(complex*, int);
void swap(complex*, complex*);

void main()
{
	complex srr[2];

	printf("Enter real and imaginary parts for 2 complex numbers:\n");
	store(srr, 2);

	printf("\nBefore Swap:\n");
	display(srr, 2);

	// Swap first and second complex numbers
	swap(&srr[0], &srr[1]);

	printf("\nAfter Swap:\n");
	display(srr, 2);
}

// Store values into array
void store(complex *srr, int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("Enter real part for complex number %d: ", i + 1);
		scanf("%d", &srr[i].real);

		printf("Enter imaginary part for complex number %d: ", i + 1);
		scanf("%d", &srr[i].imaginary);
	}
}

// Display complex numbers
void display(complex *srr, int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("%d + %di\n", srr[i].real, srr[i].imaginary);
	}
}

// Swap two complex numbers
void swap(complex *a, complex *b)
{
	complex temp;

	temp = *a;
	*a=*b;
	*b=temp;
}