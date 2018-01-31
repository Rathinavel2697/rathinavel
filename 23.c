#include <stdio.h>

int main(void) {
	int min,i,n,b[30];
	printf("enter the n value");
	scanf("%d",&n);
	min=b[1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]<min)
	{
		min=b[i];
	}
	}
	printf("min value is %d",min);
	return 0;
}
