#include<stdio.h>
int main ()
{
	int i,j;
	
	for(i='A';i<='D';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
