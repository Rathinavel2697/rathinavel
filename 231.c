#include <stdio.h>

int main()
{
	int m,i,n,b[30];
	printf("enter the n value");
	scanf("%d",&n);
	m=b[1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]<m)
	{
		m=b[i];
	}
	}
	printf("min value is %d",min);
	return 0;
}
