#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("%d\n",c);
	if(c%2==0)
	{
		printf("even");}
		else
		{
			printf("odd\n");
		}
	
	return 0;
}
