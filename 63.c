#include <stdio.h>
#include<string.h>
int main()
{
	int i,a,n,count=0;
	char s[100];
	
gets(s);
	n=strlen(s);
	printf("%d/n",n);
	for(i=0;i<n;i++)
	{
	if(s[i]=='0'&&s[i]=='1')
		{
			printf("yes\n");
			count++;
		}
		else
		{
		printf("no\n");
		
		}
	}
	
	return 0;
}
