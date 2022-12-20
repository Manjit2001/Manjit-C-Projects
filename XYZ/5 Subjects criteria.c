#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,sum,percentage;
	printf("\n enter marks of 5 subjects");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	percentage=(sum*100)/500;
	printf("\n sum of all the subjects is %d",sum);
	printf("\n Percentage of total subjects = %d",percentage);
	if (percentage> 75 && percentage <=100)
	{
		printf("\n Distiction!!");
	}
	else if (percentage<75 && percentage>=60)
	{
		printf("\n First Class!");
	
	}
	else if (percentage>= 50 && percentage <60 )
	{
		printf("\n second class");
		
	}
	else if (percentage>=40 && percentage < 50)
	{
		printf("\n pass");
	}
	else 
	{
		printf("\n fail");
	}
}
