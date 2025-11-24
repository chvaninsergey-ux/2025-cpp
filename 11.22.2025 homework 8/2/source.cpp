#include<cstdio>
char ToUpper(unsigned char c);
int main(int argc, char** argv) {
	char c = ' ';
	scanf_s("%c", &c);
	c = ToUpper(c);
	printf("%c", c);
	return 0;
}
char ToUpper(unsigned char c) {
	if (c > 'Z') {
		c = c - 32;
	}
	return c;
}