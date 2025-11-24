#include <cstdio>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
void pov(char* S1);

int main(int argc, char** argv){
    char S1[1000];
    if (fgets(S1, sizeof(S1), stdin) != NULL) {
        S1[strcspn(S1, "\n")];
    }
    pov(S1);
    return 0;
}

void pov(char* S1)
{
    int n = 0;
    while (S1[n] != '\0')
    {
        n += 1;
    }
    for (int i = 0; i < n; ++i)
    {
        int p = 1;
        for (int j = i + 1; j < n; ++j)
        {
            if (S1[i] == S1[j])
            {
                p += 1;
            }
        }
        if (p == 2)
        {
            printf("%c", S1[i]);
            return;
        }
    }
}