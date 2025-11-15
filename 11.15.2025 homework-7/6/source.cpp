#include<cstdio>
float st(float a, int n);
int main(int argc,char** argv)
{
	float a = 0;
	int n = 0;
	scanf_s("%f", &a);
	scanf_s("%d", &n);
	float k = st(a, n);
	printf("%f", k);
	return 0;
}
float st(float a, int n)
{
	float p = 0;
	if (n == 1) {
		p = a;
	}
	else {
		p = a * st(a, n - 1);
	}
	return p;
}