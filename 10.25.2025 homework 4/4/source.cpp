#include <cstdio>
#include <cmath>
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
	int a = 0;
	scanf_s("%d", &a);
	int raz = 9999;
	int b = 0;
	for (i = 0; i < n; ++i)
	{
		if (abs(a - arr[i]) < raz)
		{
			b = arr[i];
			raz = abs(a - arr[i]);
		}
		if (a == arr[i])
		{
			b = arr[i];
			break;
		}
	}
	for (i = 0;i < n;++i)
	{
		if (abs(a - arr[i]) == raz and a > arr[i])
		{
			b = arr[i];
		}
	}
	printf("%d", b);
	return 0;
}