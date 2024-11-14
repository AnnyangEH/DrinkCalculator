#include <stdio.h>

int main()
{
	int		volume, count, totalCost;
	double	pricePer10ml;

	while (1)
	{
		printf("음료의 용량(ml), 개수, 총 가격을 입력하세요. 예: 350 6 14950\n");
		scanf("%d %d %d", &volume, &count, &totalCost);
		pricePer10ml = (double)totalCost / (volume * count) * 10;
		printf("10ml당 가격: %.0f원\n", pricePer10ml);
	}
	return(0);
}
