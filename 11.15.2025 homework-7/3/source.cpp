#include<cstdio>
bool election(bool* , bool* , bool*);
int main(int argc, char** argv)
{
	bool a = 0;
	bool b = 0;
	bool c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	bool k = election(&a, &b, &c);
	printf("%d", k);
	return 0;
}
bool election(bool* a, bool* b, bool* c)
{
	int f = 0;
	int t = 0;
	if (*a == true) {
		++t;
	}
	else {
		++f;
	}
	if (*b == true) {
		++t;
	}
	else {
		++f;
	}
	if (*c == true) {
		++t;
	}
	else {
		++f;
	}
	if (t > f) {
		return true;
	}
	else {
		return false;
	}
}