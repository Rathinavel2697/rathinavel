#include <stdio.h>

int main(void) {
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	if(n%10==0)
	{
		printf("%d\n",n);
		break;
	}
	else
	{
		n++;
	}
}
	return 0;
}
