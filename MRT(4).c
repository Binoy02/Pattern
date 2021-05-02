/*
  Binoy Das Gupta
  Microred Right-Angled Triangle Star Pattern[4]
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
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(k=i;k<=5;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
