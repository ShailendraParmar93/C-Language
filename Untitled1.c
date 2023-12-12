#include<stdio.h>

main()
{
	int a[2][2] ={{1,2},{3,4}};
	int b[3][4] = {{1,2,3,4},{5,6,7,8},{1,1,1,1}};
	
	int i,j;
	for(i=0; i<3; i++)// outer loop -> row
	{
		for(j=0; j<4; j++)// inner loop -> column
		{
			printf("%d ",b[i][j]);
			scanf("%d",&b[i][j]);
		}
		printf("\n");	
	}	
	
}











