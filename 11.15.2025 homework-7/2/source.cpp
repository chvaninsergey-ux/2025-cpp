#include<cstdio>
#include<math.h>
double power(double&, int&);
int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;
	scanf_s("%llf", &a);
	scanf_s("%d", &n);
	double k = power(a, n);
	printf("%lf", k);
	return 0;
}
double power(double& a, int& n)
{
	a = pow(a, n);
	return a;
}
