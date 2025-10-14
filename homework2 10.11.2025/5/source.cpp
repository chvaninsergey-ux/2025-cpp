#include <cstdio>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a == 0 and b == 0 and c == 0)
	{
		printf("0");
	}
	else if (a == 0 and b == 0 and c == 1)
	{
		printf("y");
	}
	else if (a == 0 and b == 0 and c == -1)
	{
		printf("-y");
	}
	else if (a == 0 and b == 0)
	{
		printf("%dy", c);
	}
	else if (a == 0 and (b == 1 or b == -1) and c == 1)
	{
		printf("x+y", c);
	}
	else if (a == 0 and (b == 1 or b == -1) and c == -1)
	{
		printf("x-y", c);
	}
	else if (a == 0 and b == 1 and c > 0)
	{
		printf("x+%dy", c);
	}
	else if (a == 0 and b == 1 and c < 0)
	{
		printf("x%dy", c);
	}
	else if (a == 0 and b == -1 and c > 0)
	{
		printf("-x+%dy", c);
	}
	else if (a == 0 and b == -1 and c < 0)
	{
		printf("-x%dy", c);
	}
	else if (a == 0 and b > 0 and c == 1)
	{
		printf("%dx+y", b);
	}
	else if (a == 0 and b < 0 and c == 1)
	{
		printf("%dx+y", b);
	}
	else if (a == 0 and b > 0 and c == -1)
	{
		printf("%dx-y", b);
	}
	else if (a == 0 and b < 0 and c == -1)
	{
		printf("%dx-y", b);
	}
	else if (a == 0 and (b > 0 or b < 0) and c > 0)
	{
		printf("%dx+%dy", b, c);
	}
	else if (a == 0 and (b > 0 or b < 0) and c < 0)
	{
		printf("%dx%dy", b, c);
	}
	else if (a == 0 and c == 0 and b == 1)
	{
		printf("x");
	}
	else if (a == 0 and c == 0 and b == -1)
	{
		printf("-x");
	}
	else if (a == 0  and c == 0)
	{
		printf("%dx", b);
	}
	else if ((a > 0 or a < 0) and b == 1 and c == -1)
	{
		printf("%d+x-y", a);
	}
	else if ((a > 0 or a < 0) and b == 1 and c == 1)
	{
		printf("%d+x-y", a);
	}
	else if ((a > 0 or a < 0) and b == -1 and c == -1)
	{
		printf("%d-x-y", a);
	}
	else if ((a > 0 or a < 0) and b == -1 and c == 1)
	{
		printf("%d-x-y", a);
	}
	else if ((a > 0 or a < 0) and b == 0 and c > 0)
	{
		printf("%d+%dy", a, c);
	}
	else if ((a > 0 or a < 0) and b == 0 and c < 0)
	{
		printf("%d%dy", a, c);
	}
	else if ((a > 0 or a < 0) and b < 0 and c == 0)
	{
		printf("%d%dx", a, b);
	}
	else if ((a > 0 or a < 0) and b < 0 and c == 0)
	{
		printf("%d%dx", a, b);
	}
	else if ((a > 0 or a < 0) and b == 1 and c > 0)
	{
		printf("%d+x+%dy", a, c);
	}
	else if ((a > 0 or a < 0) and b == 1 and c < 0)
	{
		printf("%d+x%dy", a, c);
	}
	else if ((a > 0 or a < 0) and b < 0 and c == 1)
	{
		printf("%d%dx+y", a, b);
	}
	else if ((a > 0 or a < 0) and b < 0 and c == 1)
	{
		printf("%d%dx+y", a, b);
	}
	else if ((a > 0 or a < 0) and b == -1 and c > 0)
	{
		printf("%d-x+%dy", a, c);
	}
	else if ((a > 0 or a < 0) and b == -1 and c < 0)
	{
		printf("%d-x%dy", a, c);
	}
	else if ((a > 0 or a < 0) and b < 0 and c == -1)
	{
		printf("%d%dx-y", a, b);
	}
	else if ((a > 0 or a < 0) and b < 0 and c == -1)
	{
		printf("%d%dx-y", a, b);
	}
	else if ((a > 0 or a < 0) and b > 0 and c > 0)
	{
		printf("%d+%dx+%dy", a, b, c);
		}
	else if ((a > 0 or a < 0) and b > 0 and c < 0)
	{
		printf("%d+%dx%dy", a, b, c);
		}
	else if ((a > 0 or a < 0) and b < 0 and c < 0)
	{
		printf("%d%dx%dy", a, b, c);
		}
	else if ((a > 0 or a < 0) and b < 0 and c > 0)
	{
		printf("%d%dx+%dy", a, b, c);
		}
	return 0;
}