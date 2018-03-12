#include <stdio.h>
#include<string.h>
int main()
{
	int i,k;
	char a[100];
	scanf("%d",&k);
	scanf("%s",a);
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
