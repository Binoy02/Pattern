/*
  Binoy Das Gupta
  Inverted Right-Angled Triangle Star Pattern[2]
  01-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
