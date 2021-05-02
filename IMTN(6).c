/*
  Binoy Das Gupta
  Inverted Microred Right-Angled Triangle Number Pattern[6]
  // 
 5 4 3 2 1
   5 4 3 2
     5 4 3
       5 4
         5 //
  02-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
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
