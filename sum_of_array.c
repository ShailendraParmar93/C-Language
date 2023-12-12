#include<stdio.h>

main()
{
	int i,j,k,l;
	
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(l=5; l>i; l--)
		{
			printf("  ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
