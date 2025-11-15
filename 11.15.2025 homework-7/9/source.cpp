#include<cstdio>
void hanoi(int n, int a, int b);
int main(int argc,char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	hanoi(n, 1, 2);
	return 0;
}
void hanoi(int n, int a, int b)
{
	if (n < 1) {
		return;
	}
	int c = 6 - a - b;
	hanoi(n - 1, a, c);
	printf("Disk %d move from %d to %d\n", n, a, b);
	hanoi(n - 1, c, b);
}