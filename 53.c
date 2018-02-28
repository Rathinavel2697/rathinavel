#include<stdio.h>
int main()
{
	int a,b=0,num=0;
	scanf("%d",&a);
	while(a!=0)
	{
		num=a%10;
		a=a/10;
		b=b+num;	
    }
	printf("%d\n",b);
	return 0;
}
