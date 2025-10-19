#include<cstdio>
int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int f1 = 0;
    int f2 = 1;
    int f3 = 1;
    scanf_s("%d", &n);
    while (a < n)
    {
        f1 = f2;
        f2 = f3;
        f3 = f2 + f1;
        ++a;
    }
    printf(("%d"), f1);
    return 0;
}