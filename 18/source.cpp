#include <cstdio>
int main(int argc, char** argv)
{
	long long a;
	scanf_s("%lld", &a);
	printf("%lld", (a - 1) / 10 + 1);
	return 0;
}