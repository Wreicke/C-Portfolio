	#include <cs50.h>
	#include <stdio.h>

	int main(void)
	{
		do(
			int n = get_int("Size of block :");
		)
		while(n>0)
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
