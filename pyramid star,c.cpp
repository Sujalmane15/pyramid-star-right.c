#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)        //ROWS
	{
		for(j=1;j<i;j++)             //space
		{
			printf(" ");
		}
		for(k=i;k<=5;k++)         //colums
		{
			printf("*");
          	}
		printf("\n");	
		
	}
	return 0;
}
