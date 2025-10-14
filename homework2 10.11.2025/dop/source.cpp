#include <cstdio>
int main(int argc, char** argv)
{
	char lit1 = ' ';
	char numb1 = ' ';
	char lit2 = ' ';
	char numb2 = ' ';
	int i = 0;
	scanf_s("%c", &lit1);
	scanf_s(" %c", &numb1);
	scanf_s(" %c", &lit2);
	scanf_s(" %c", &numb2);
	if (((numb1 == char('2') and (numb2 == char('3') or numb2 == char('4')) or (numb1 > char('2') and numb2 - numb1 == 1)) and (lit1 == lit2)))
	{
		printf("Pawn\n");
		i += 1;
	}
	if (((numb2 - numb1 == 2) and (lit2 - lit1 == 1 or lit2 - lit1 == -1)) or ((numb2 - numb1 == 1) and (lit2 - lit1 == 2 or lit2 - lit1 == -2)) or ((numb2 - numb1 == -2) and (lit2 - lit1 == 1 or lit2 - lit1 == -1)) or ((numb2 - numb1 == -1) and (lit2 - lit1 == 2 or lit2 - lit1 == -2)))
	{
		printf("Knight\n");
		i += 1;
	}
	if ((numb1 == numb2) or (lit1 == lit2))
	{
		printf("Rook\n");
		i += 1;
	}
	if ((numb1 - numb2 == lit1 - lit2) or (numb1 - numb2 == lit2 - lit1))
	{
		printf("Bishop\n");
		i += 1;
	}
	if ((numb1 - numb2 == 1 or numb1 - numb2 == -1 or numb1 == numb2) and (lit1 - lit2 == 1 or lit1 - lit2 == -1 or lit1 == lit2))
	{
		printf("King\n");
		i += 1;
	}
	if (numb1 == numb2 or lit1 == lit2 or numb1 - numb2 == lit1 - lit2 or numb1 - numb2 == lit2 - lit1)
	{
		printf("Queen\n");
		i += 1;
	}
	if (i == 0)
	{
		printf("Nobody");
	}
	return 0;
}