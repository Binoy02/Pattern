/*
  Binoy Das Gupta
  Inverted Microred Right-Angled Triangle Number Pattern[3]
  // 
 5 5 5 5 5
   4 4 4 4
     3 3 3
       2 2
         1 //
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
			printf(" %d",i);
		}
		printf("\n");
	}
	return 0;
}
