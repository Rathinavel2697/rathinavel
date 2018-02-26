#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			
				temp=temp+a[i];
			}
		
	
	printf("%d\n",temp/n);
	return 0;
}
