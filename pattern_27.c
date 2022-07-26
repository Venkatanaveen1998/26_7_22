#include<stdio.h>
int main()
{
	int n,sum=0,prev=1,next_value;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			next_value=sum+prev;
			printf("%d ",next_value);
			sum=prev;
			prev=next_value;
		}
		printf("\n");
	}
}
