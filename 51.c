#include<stdio.h>
int main()
{
	int a,i,num=0;
	int b[i];
	scanf("%d",&a);
	while(a!=0)
	{
		num=a%10;
		a=a/10;
		b[i]=num;
		i++;
	}
	for(i=2;i>=0;i--)
	{
	printf("%d\t",b[i]);	
	}
	
	return 0;
}
