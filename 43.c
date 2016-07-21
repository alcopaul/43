#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char fff[512];
	char *h = "Enter text: ";
	int matrix[4][4] = {
		{4,15,17,7},
		{5,19,13,6},
		{20,9,2,12},
		{14,0,11,18}};
	int hh = 0;
	printf("%s", h);
	gets_s(fff,sizeof(fff));
	int k = strlen(fff);
	for (int u = 0; u < k; ++u)
	{
		hh += (int) fff[u];
	}
	srand(43*hh);
	int buff;
	int total = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int y = 0; y < 4; ++y)
		{
			buff = matrix[i][y] - matrix[rand() % 4][rand() % 4];
			total += buff;
			
		}
	}
	printf("%d", total);
	char c = getchar();
	return 0;
}
