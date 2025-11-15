#include<cstdio>
#include<cmath>
double st(double, int);
int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;
	scanf_s("%lf", &a);
	scanf_s("%d", &n);
	float k = st(a, n);
	printf("%lf", k);
	return 0;
}
double st(double a, int n)
{
	double p = 1.0;
	if (n == 0) {
	}
	else if (n>0){
		p = a * st(a, n - 1);
	}
	else {
		p =st(a, n + 1) / a;	
	}
	return p;
}