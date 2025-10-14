#include <cstdio>
int main(int argc, char** argv)
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int max1 = 0;
	int min1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	int max2 = 0;
	int min2 = 0;
	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &c1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &c2);
	if (a1 > b1)
	{
		max1 = a1;
		min1 = b1;
	}
	else
	{
		max1 = b1;
		min1 = a1;
	}
	if (c1 > max1)
	{
		max1 = c1;
	}
	else if (min1 > c1)
	{
		min1 = c1;
	}
	if (a2 > b2)
	{
		max2 = a2;
		min2 = b2;
	}
	else
	{
		max2 = b2;
		min2 = a2;
	}
	if (c2 > max2)
	{
		max2 = c2;
	}
	else if (min2 > c2)
	{
		min2 = c2;
	}
	a1 = (a1 + b1 + c1) - (max1 + min1);
	a2 = (a2 + b2 + c2) - (max2 + min2);
	if ((a1 == a2) and (max1 == max2) and (min1 == min2))
	{
		printf("Boxes are equal");
	}
	else if ((a2 >= a1) and (min2 >= min1) and (max2 >= max1))
	{
		printf("The first box is smaller than the second one");
	}
	else if ((a1 >= a2) and (min1 >= min2) and (max1 >= max2))
	{
		printf("The first box is larger than the second one");
	}
	else
	{
		printf("Boxes are incomparable");
	}
	return 0;
}