/*
  Binoy Das Gupta
  Inverted Right-Angled Triangle Star Pattern[3]
  01-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
