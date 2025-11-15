#include<cstdio>
bool isprim(long long&);
int main(int argc, char** argv)
{
	long long n = 0;
	scanf_s("%lld", &n);
	bool k = isprim(n);
	if (k == true) {
		printf("prim");
	}
	else {
		printf("composite");
	}
	return 0;
}
bool isprim(long long& n)
{
	for (int i = 2;i * i <= n;++i) {
		if (n % i == 0) {
			return 0;
		}
		else {
			return 1;
		}

	}
}