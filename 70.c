#include<stdio.h>
int main(void)
{
	int r,i,a,b,c;
	printf("enter the number:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		a=pow(2,i);
		if(a>r)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
