#include<cstdio>
int min(int*, int*, int*, int*);
int main(int argc,char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	int k = min(&a, &b, &c, &d);
	printf("%d", k);
	return 0;
}
int min(int* a, int* b, int* c, int* d)
{
	if (a < b and a < c and a < d) {
		return *a;
	}
	else if (b < a and b < c and b < d) {
		return *b;
	}
	else if (c < a and c < b and c < d) {
		return *c;
	}
	else {
		return *d;
	}
}