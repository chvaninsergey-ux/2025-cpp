#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
void len(char* S1);
int main(int argc, char** argv){
    char S1[1000];
    if (fgets(S1, sizeof(S1), stdin) != NULL) {
        S1[strcspn(S1, "\n")];
    }
    len(S1);
    return 0;
}
void len(char* S1)
{
    int p = 0;
    char S[1000];
    char* token = strtok(S1, " ");
    while (token != NULL)
    {
        int k = 0;
        while (token[k] != '\0')
        {
            ++k;
        }
        if (k > p)
        {
            p = k;
            strcpy(S, token);
        }
        token = strtok(NULL, " ");
    }
    printf("%s\n", S);
    printf("%d", p);
}