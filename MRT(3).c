/*
  Binoy Das Gupta
  Microred Right-Angled Triangle Star Pattern[3]
  //
         *
       * *
     * * *
   * * * *
 * * * * * //
  02-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf("  ");
		}
		for(k=i;k>=1;k--)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
