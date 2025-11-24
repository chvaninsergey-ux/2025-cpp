#include<cstdio>
#include<cstring>
#include<cstdlib>
#define _CRT_SECURE_NO_WARNINGS
bool pol(char* S1);
int main(int argc, char** argv) {
	char S1[1000];
	if (fgets(S1, sizeof(S1), stdin) != NULL) {
		S1[strcspn(S1, "\n")] = '\0';
	}
	int k = 0;
	k = pol(S1);
	if (k == 1) {
		printf("no");
	}
	else {
		printf("yes");
	}
	return 0;
}
bool pol(char* S1) {
	size_t p = strlen(S1);
	if (p % 2 == 0 && p != NULL) {
		size_t n = p / 2;
		int q = 0;
		for (int i = 0;i < n;++i) {
			if (S1[i] != S1[p - 1 - i]) {
				q = 1;
			}
		}
		return q;
	}
	else {
		return 1;
	}
}