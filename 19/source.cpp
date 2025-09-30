#include <cstdio>
int main(int argc, char** argv)
{
    long long a, b;
    scanf_s("%lld", &a);
    scanf_s("%lld", &b);
    printf("%lld", (a % b) * (b % a) + 1);
    return 0;
}