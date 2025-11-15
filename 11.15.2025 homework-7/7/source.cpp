#include<cstdio>
int phi(int n);
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int k = phi(n);
	printf("%d", k);
	return 0;
}
int phi(int n)
{
	int p = 0;
	if (n < 2) {
		p = 1;
	}
	else {
		p = phi(n - 1) + phi(n - 2);
	}
	return p;
}