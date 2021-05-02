/*
  Binoy Das Gupta
  Inverted Microred Right-Angled Triangle Star Pattern[3]
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
		for(j=i;j<5;j++)
		{
			printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
