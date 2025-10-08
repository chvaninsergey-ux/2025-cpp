#include <cstdio>
int main(int argc, char** argv)
{
	long long a = 0;
	scanf_s("%lld", &a);
	printf("%lld", (a / 100) + (a % 10) + (a / 10 % 10));
	return 0;
}