/*
  Binoy Das Gupta
  Inverted Microred Right-Angled Triangle Star Pattern[2]
  // 
 * * * * *
   * * * *
     * * *
       * *
         * //
  02-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
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
