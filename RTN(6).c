/*
  Binoy Das Gupta
  Right-Angled Triangle Number Pattern(4)
  //
  5
  4 5
  3 4 5
  2 3 4 5 
  1 2 3 4 5 //
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
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
