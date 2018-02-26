#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,count=0;
	scanf("%d",&a);
for(i=1;i<a;i++)
{
	b=pow(2,i);
	if(a==b)
	{
		count++;
		
	}
}
if(count>0)
{
	printf("\n yes");
}
else
{
	printf("\nno");
}
return 0;
}
