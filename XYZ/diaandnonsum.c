#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("\n enter the matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
	    {
	    	scanf("%d",&a[i][j]);
			}	
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
			 printf("\t 5");
			}
			else
			{
			printf("\t %d",a[i][j]);
			}
	    }printf("\n");
	}

}
