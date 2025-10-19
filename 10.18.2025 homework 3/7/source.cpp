#include<cstdio>
int main(int argc, char** argv)
{
    long long int a = 0;
    long long int c = 0;
    long long int d = 0;
    long long int k = 0;
    scanf_s("%lld", &a);
    scanf_s("%lld", &c);
    scanf_s("%lld", &d);
    scanf_s("%lld", &k);
    for (long long int b = -100; b < 101; ++b)
    {
        if (b * b * b * a + b * b * c + b * d + k == 0)
        {
            printf("%d ", b);
        }
    }
    return 0;
}