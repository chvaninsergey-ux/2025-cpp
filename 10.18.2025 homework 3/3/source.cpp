#include<stdio.h>

int main(int argc, char** argv)
{
    int n = 0;
    int m = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    int a = n;
    int b = m;
    while (a * b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    printf("%d\n", n * m / (a + b));
    return 0;
}