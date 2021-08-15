#include <stdio.h>


int twoSet (int max)	{ return max*=0.80; }	// 80%
int threeSet (int max)	{ return max*=0.65; }	// 65%
int fourSet (int max)	{ return max*=0.50;	}	// 50% 
int fiveSet (int max)	{ return max*=0.35; }	// 35%
int sixSet (int max)		{ return max*=0.20; }	// 20%

int main()
{
	int max;

	printf("\tРаспределение максимальноого кол-ва повторений на подходы\n\n");

	printf("Ваше кол-во повторений: ");
	scanf("%d", &max);

	printf("\t2 по %d.\n", twoSet(max));
	printf("\t3 по %d.\n", threeSet(max));
	printf("\t4 по %d.\n", fourSet(max));
	printf("\t5 по %d.\n", fiveSet(max));
	printf("\t6 по %d.\n", sixSet(max));

	return 0;
}
