#include<stdio.h>
main()
{
	int a[10],i,n,temp,j,pos;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=0;i<n;i++);
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n second smallest element=%d",a[2]);
	printf("\ n second last largest no =%d",a[n-1]);
	return 0;
}

