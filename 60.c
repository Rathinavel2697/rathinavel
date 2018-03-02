#include<stdio.h>
int main()
{
	int b,i,n1=0,n2=1,n;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("%d\n",n1);
		b=n1+n2;
		n1=n2;
		n2=b;
	}
	return 0;
}
