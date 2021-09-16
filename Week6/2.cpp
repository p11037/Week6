#include<stdio.h>

int main() {

	int x = 0, y = 0, a[9], b[9], c[9];

	printf("Enter size of array : ");

	scanf_s("%d %d", &x, &y);

	printf("Enter element of array :\n");

	for (int i = 0; i < x * y; i++) {

		scanf_s("%d", &a[i]);

	}

	for (int i = 0; i < x * y; i++) {

		scanf_s("%d", &b[i]);

	}


	printf("\nAns\n");

	for (int i = 0; i < x * y; i++) {

		c[i] = a[i] + b[i];

		if (i % 3 == 0 && i != 0)

			printf("\n%d ", c[i]);

		else printf("%d ", c[i]);

	}
	return 0;
}