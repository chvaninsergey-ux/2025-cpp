#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int arr[SIZE] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int b = 0;
	int m = 0;
	int k = 0;
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &b);
	for (i = 0; i < n; ++i)
	{
		if (arr[i] == b)
		{
			++k;
		}
	}
	printf("%d", k);
	return 0;
}