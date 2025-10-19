#include<cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	do
	{
		scanf_s("%d", &a);
		if (a == b)
		{
			++c;
		}
		else
		{
			c = 1;
		}
		b = a;
		if (c >= d)
		{
			d = c;
		}
	} while (a != 0);
	printf(("%d"), d);
	return 0;
}