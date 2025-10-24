#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int arr[SIZE] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);
	}
	int l = 0;
	int r = 0;
	scanf_s("%d", &l);
	scanf_s("%d", &r);
	int max = -1001;
	int ind = 0;
	for (i = l-1; i < r; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			ind = i + 1;
		}
	}
	printf("%d ", max);
	printf("%d ", ind);
	return 0;
}