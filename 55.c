#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("%d\n",c);
	if(c%2==0)
	{
		printf("even\n");
	}
		else
		{
			printf("odd");
		}
	return 0;
}
