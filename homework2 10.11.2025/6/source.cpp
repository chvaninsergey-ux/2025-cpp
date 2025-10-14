#include <cstdio>
#include <cmath>
int main(int argc, char** argv)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double x1 = 0;
	double x2 = 0;
	scanf_s("%lff", &a);
	scanf_s("%lff", &b);
	scanf_s("%lff", &c);
	if (a == 0 and b == 0 and c == 0)
	{
		printf("-1");
	}
	else if (a == 0 and b == 0)
	{
		printf("0");
	}
	else if (a == 0)
	{
		printf("1\n");
		x1 = -c / b;
		printf("%llf", x1);
	}
	else if ((b * b) - (4 * a * c) < 0)
	{
		printf("0");
	}
	else if ((b * b) - (4 * a * c) == 0)
	{
		printf("1\n");
		x1 = -b / (2 * a);
		printf("%llf", x1);
	}
	else if ((b * b) - (4 * a * c) > 0)
	{
		printf("2\n");
		x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2*a);
		x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2*a);
		printf("%llf\n", x1);
		printf("%llf", x2);
	}
	return 0;
}