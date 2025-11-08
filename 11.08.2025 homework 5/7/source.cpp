#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n = 0;
	int c = 0;
	int i = 0;
	scanf_s("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; ++i) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < (n / 2); ++i) {
		c = arr[i];
		arr[i] = arr[(n - 1) - i];
		arr[(n - 1) - i] = c;
	}
	for (i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}