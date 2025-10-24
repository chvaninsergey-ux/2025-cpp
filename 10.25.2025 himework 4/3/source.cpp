#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int arr[SIZE] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int max = 0;
	int min = 1000;
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (i = 0; i < n; ++i)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		printf("%d ", arr[i]);
	}
	return 0;
}