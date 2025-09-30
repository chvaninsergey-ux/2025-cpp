#include <cstdio>
int main(int argc, char** argv)
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d %d", (b - 1) / a + 1, b - ((b - 1) / a) * a);
	return 0;
}