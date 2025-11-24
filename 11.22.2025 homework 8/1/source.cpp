#include<cstdio>
bool IsDigit(unsigned char c);
int main(int argc, char** argv) {
	char c = ' ';
	int p = 0;
	scanf_s("%c", &c);
	p = IsDigit(c);
	if (p == 1) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}
bool IsDigit(unsigned char c) {
	int p = ' ';
	if (0 <= c && c <= 9) {
		p = 1;
	}
	else {
		p = 0;
	}
	return p;
}