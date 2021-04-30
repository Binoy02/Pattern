/*
  Binoy Das Gupta
  Right_Angled Triangle Star Pattern[using two increment operators]
  30-04-2021
*/

#include<stdio.h>
int main()
{
	int i,j; //declaring variables
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
