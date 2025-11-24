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
		arr1[i] = i + 1;
		arr2[i] = i + 1;
	}
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int k = 1;
	for (i = a-1;i < b;++i) {
		arr2[i] = arr1[b - k];
		++k;
	}
	for (i = 0;i < n;++i) {
		arr1[i] = arr2[i];
	}
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	k = 1;
	for (i = a-1;i < b;++i) {
		arr2[i] = arr1[b - k];
		++k;
	}
	for (i = 0;i < n;++i) {
		printf("%d ", arr2[i]);
	}
	return 0;
}