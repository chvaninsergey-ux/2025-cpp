#include<cstdio>
int bin(int n, int k);
int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &k);
	int p = bin(n, k);
	printf("%d", p);
	return 0;
}
int bin(int n, int k)
{
	int p = 0;
	if (k == 0 or k == n) {
		p = 1;
	}
	else {
		p = bin(n - 1, k - 1) + bin(n - 1, k);
	}
	return p;
}