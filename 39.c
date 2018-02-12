#include<stdio.h>
int main()
{
	int a[50],i,f=0;
	for(i=1;i<11;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<11;i++)
	{
		if(a[i]>f)
		{
			f=a[i];
			
		}
	}
	printf("%d\n",f);
	return 0;
	}
