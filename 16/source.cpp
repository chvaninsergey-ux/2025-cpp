#include <cstdio>
int main(int argc, char** argv)
{
	long long a;
	scanf_s("%lld", &a);
	printf("%lld", (a / 10) % 10);
	return 0;
}