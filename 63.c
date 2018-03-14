#include<stdio.h>
int main()
{
	int a,count=1;
	char ch[50];
	scanf("%[^/n]s",ch);
	for(a=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ' )
		{
			count++;
			
		}
	}
	printf("%d",count);
	return 0;
}
