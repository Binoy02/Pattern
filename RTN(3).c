/*
  Binoy Das Gupta
  Right-Angled Triangle Number Pattern(3)
  //
  5
  4 4
  3 3 3
  2 2 2 2 
  1 1 1 1 1 //
  30-04-2021
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
