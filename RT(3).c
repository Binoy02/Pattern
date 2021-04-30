/*
  Binoy Das Gupta
  Right-Angled Triangle Star Pattern[using one increment, one decrement operator]
  30-04-2021
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
