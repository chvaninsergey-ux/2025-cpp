#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	int p = 10000;
	scanf_s("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	for (int i = 0;i < n;++i) {
		scanf_s("%d", &arr[i]);
		if (arr[i] > p) {
			++k;
		}
		p = arr[i];
	}
	printf("%d", k);
	free(arr);
	return 0;
}