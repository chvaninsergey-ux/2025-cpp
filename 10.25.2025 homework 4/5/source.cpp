#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int arr1[SIZE] = { 0 };
	int arr2[SIZE] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr1[i]);
	}
	for (i = 0; i < n; ++i) {
		arr2[i] = arr1[n - i - 1];
		printf("%d ", arr2[i]);
	}
	return 0;
}