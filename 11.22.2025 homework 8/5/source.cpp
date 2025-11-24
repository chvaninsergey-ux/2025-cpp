#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int kol(char* S1);
int main(int argc, char** argv) {
	char S1[1000];
	if (fgets(S1, sizeof(S1), stdin) != NULL) {
		S1[strcspn(S1, "\n")];
	}
	printf("%d", kol(S1));
	return 0;
}
int kol(char* S1) {
	int n = 0;
	char* token;
	token = strtok(S1, " ");	
	while (token != NULL) {
		++n;
		token = strtok(NULL, " ");
	}
	return n;
}