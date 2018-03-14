#include<stdio.h>
int main()
{
	int n,i,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("yes\n");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
