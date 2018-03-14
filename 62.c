#include <stdio.h>
#include<string.h>
int main()
{
	int i,count=0,len=0;
	char a[10];
	//scanf("%d",&n);
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		++len;
	}

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='0'||a[i]=='1')
		{
			count++;
		}
	
		}
		if(count==len)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		
		return 0;
	}
