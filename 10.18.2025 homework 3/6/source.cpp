#include<cstdio>
int main(int argc, char** argv)
{
    int a = 0;
    int c = 0;
    int d = 0;
    int k = 0;
    scanf_s("%d", &a);
    for (int b = 0; b < a; ++b)
    {
        scanf_s("%d", &c);
        if (c > 0)
        {
            ++d;
        }
        else
        {
            d = 0;
        }
        if (d > k)
        {
            k = d;
        }
    }
    printf("%d", k);
    return 0;
}