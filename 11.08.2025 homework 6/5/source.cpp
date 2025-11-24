#include <cstdio>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	int p = 0;
	scanf_s("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	for (int i = 0;i < n;++i) {
		scanf_s("%d", &arr[i]);
		if ((arr[i] > 0 and p > 0) or (arr[i] < 0 and p < 0)) {
			++k;
		}
		p = arr[i];
	}
	if (k > 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	free(arr);
	return 0;
}