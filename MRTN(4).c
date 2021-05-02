/*
  Binoy Das Gupta
  Microred Right-Angled Triangle Number Pattern[4]
  //
         5
       4 4
     3 3 3
   2 2 2 2
 1 1 1 1 1 //
  02-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>1;j--)
		{
			printf("  ");
		}
		for(k=5;k>=i;k--)
		{
			printf(" %d",k);
		}
		printf("\n");
	}
	return 0;
}
