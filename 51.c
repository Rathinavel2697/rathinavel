#include<stdio.h>
int main()
{
	int a,i,n=0,num=0;
	int b[i];
	scanf("%d",&a);
	while(a!=0)
	{
		num=a%10;
		a=a/10;
		b[i]=num;
		i++;
		n++;
	}
	for(i=n-1;i>=0;i--)
	{
	printf("%d\t",b[i]);	
	}
	
	return 0;
}
