#include <cstdio>
#define SIZE 1000
int main(int argc, char** argv)
{
	int A[SIZE] = { 0 };
	int i = 0;
	int b = 0;
	int m = 0;
	scanf_s("%d", &b);
	for (i = 0; i < SIZE; ++i)
	{
		scanf_s("%d", &A[i]);
		if (A[i] == b)
		{
			++b
		}
	}
	return 0;
}