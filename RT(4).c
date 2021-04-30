/*
  Binoy Das Gupta
  Right-Angled Triangle Star Pattern[using one decrement, one increment operator]
  30-04-2021
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
