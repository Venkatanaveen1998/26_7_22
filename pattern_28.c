#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(sum%2==0)
			printf("%d ",sum);
			else
			printf("-%d ",sum);
			sum++;
		}
		printf("\n");
		
	}
}
