#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int i,n,count=0;
	scanf("%[^/n]s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='0'&& s[i]<='9')
		{
			count++;
		}
	}
		
		printf("%d numeric",count);
		
		
	
	return 0;
}
