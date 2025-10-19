#include<cstdio>
int main(int argc, char** argv)
{
	double a = 0;
	double b = 0;
	int i = 1;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	while (a < b)
	{
		a = a * 115;
		a = a / 100;
		++i;
	}
	printf(("%d"), i);
	return 0;
}