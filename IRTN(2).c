/*
  Binoy Das Gupta
  Inverted Right-Angled Triangle Number Pattern[1]
  //
  1 2 3 4 5 
  2 3 4 5
  3 4 5 
  4 5 
  5 //
  01-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
