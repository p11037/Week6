#include<stdio.h>

int main() {

	int x = 0, y = 0, a[5][5], b[5][5], c[5][5];

	printf("Enter size of array : ");

	scanf_s("%d %d", &x, &y);

	printf("Enter element of array :\n");

	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			scanf_s("%d", &a[i][j]);

		}

	}

	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			scanf_s("%d", &b[i][j]);

		}

	}

	printf("\nAnswer\n");


	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			c[i][j] = a[i][j] + b[i][j];

				printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}