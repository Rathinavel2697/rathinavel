#include <stdio.h>

int main()
{
int i,m,max,a[10];
scanf("%d",&m);
for(i=0;i<=m;i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<m;i++)

if(max<a[i])
max=a[i];
{
 printf("%d",max);
}
return 0;
}
