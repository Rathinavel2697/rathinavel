#include <stdio.h>

int main(void) {

int a[50],i,j,t=0;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
printf("%d\n",a[0]);
printf("%d\n",a[9]);
	return 0;
}
