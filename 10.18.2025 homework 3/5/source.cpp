#include<cstdio>
int main(int argc, char** argv)
{
    int a = 0;
    int max = 0;
    int vmax = 0;
    do
    {
        scanf_s("%d", &a);
        if (a > max)
        {
            vmax = max;
            max = a;
        }
        else if (a > vmax)
        {
             vmax = a;
        }
    } while (a != 0);
    printf(("%d"), vmax);
    return 0;
}