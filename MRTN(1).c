/*
  Binoy Das Gupta
  Microred Right-Angled Triangle Number Pattern[1]
  //
         1
       2 2
     3 3 3
   4 4 4 4
 5 5 5 5 5 //
  02-05-2021
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	return 0;
}
