#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int b=0,c=0,i,n;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
	if((a[i]>='0'&&a[i]<='9'))
	{
	b++;
	}
	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
	{
	c++;
	}
}
if(b>0&&c>0)
{
	printf("yes\n");
}
	else
	{
		printf("no\n");
	}

return 0;


}
