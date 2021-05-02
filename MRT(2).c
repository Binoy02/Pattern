/*
  Binoy Das Gupta
  Microred Right-Angled Triangle Star Pattern[2]
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
	for(i=5;i>=1;i--)
	{
		for(j=i;j>1;j--)
		{
			printf("  ");
		}
		for(k=5;k>=i;k--)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
