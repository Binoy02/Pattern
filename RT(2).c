/*
  Binoy Das Gupta
  Right-Angled Triangle Star Pattern[using two decrement operators]
  30-04-2021
*/

#include<stdio.h>
int main()
{
	int i,j; //declaring variables
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
