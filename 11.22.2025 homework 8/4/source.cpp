#include<cstdio>
#include<cstring>
#define _CRT_SECURE_NO_WORNING
bool Compare(char* S1, char* S2);
int main(int argc, char** argv) {
	char S1[1000];
	if (fgets(S1, sizeof(S1), stdin) != NULL) {
		S1[strcspn(S1, "\n")] = '\0';
	}
	char S2[1000];
	if (fgets(S2, sizeof(S1), stdin) != NULL) {
		S2[strcspn(S2, "\n")] = '\0';
	}
	int p = 0;
	p = Compare(S1, S2);
	if (p == 1) {
		printf("no");
	}
	else {
		printf("yes");
	}
	return 0;
}
bool Compare(char* S1, char* S2) {
	int k = 0;
	k = strcmp(S1, S2);
	if (k != 0) {
		k = 1;
	}
	return k;
}
